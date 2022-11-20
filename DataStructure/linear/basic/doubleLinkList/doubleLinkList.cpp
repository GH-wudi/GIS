/**
 * C ����: ˫�����������
 *
 * @author wfh
 * @date 2022/11/20
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct Node//what is typedef
{
	int data;
	struct Node* next;
	struct Node* prior;
}Node;
void initList(Node*& L, int a[], int l);
void output(Node* L);

void output(Node* L)
{
	Node* p = L;//��ͷ���
	while (p->next)
	{
		p = p->next;
		printf("%d->", p->data);
	}
}

void initList(Node*& L, int a[], int l)
{
	L = (Node*)malloc(sizeof(Node));
	L->next = NULL;
	L->prior = NULL;
	Node* r = L;
	for (int i = 0; i < l; i++)
	{
		Node* n = (Node*)malloc(sizeof(Node));
		n->data = a[i];
		r->next = n;
		n->prior = r;
		// r = r->next;
		r = n;
	}
	r->next = NULL;
}

Node* insertElem(Node* L, Node* p, int data)
{
	//Node* p = L;
	Node* n = (Node*)malloc(sizeof(Node));
	n->data = data;
	n->next = p->next;
	n->prior = p;
	p->next = n;
	n->next->prior = n;
	return L;
}

Node* findElem(Node* L, int x)
{
	// Node* p = L->next;
	Node* p = L;
	while (p->next)
	{
		p = p->next;
		if (p->data == x)
			return p;
	}
	return NULL;
}

int findDeleteElem(Node* L, int x)//&�Ǵ���ģ�Ϊʲô��
{
	Node* p = L;
	while (p->next != NULL)
	{
		//����д��ȷʵ�鲻�����һ��
		// p = p->next;
		// if (p->data == x)
		// 	break;

		if (p->next->data == x)
			break;
		p = p->next;
	}
	if (p->next == NULL)
		return 0;
	else
	{
		Node* q = p->next;//����������break������Ҫ��ֵΪp->next
		// p->next = q->next;
		// q->next->prior = p;
		p->next = p->next->next;
		p->next->prior = p;
		free(q);
		return 1;
	}
}

int modifyElem(Node* L, int index, int x)
{
	Node* p = L;
	for (int i = 0; i < index; i++)
	{
		if (p->next == NULL)
			return 0;
		p = p->next;
	}
	p->next->data = x;
	// p->data = x;
	return 1;
}
int main()
{
	int num[] = { 49,38,65,97,76,13,27,50 };
	int len = sizeof(num) / sizeof(*num);
	Node* L = NULL;//����main�����ڲ��ľֲ�����
	// Node* p = L->next->next;//Ϊʲô������һ�в��� ��Ϊ��ʱ��L->next=NULL
	initList(L, num, len);//ָ�����Ͳ��ü�&
	printf("init:  ");
	output(L);//��������

	// printf("\n");
	// Node* p = L->next->next;//������һ�п���
	// L = insertElem(L, p, 101);
	// printf("insert:");
	// output(L);

	printf("\n");
	int flag = findDeleteElem(L, 50);
	if (flag)
		printf("success!\n");
	else
		printf("fail!\n");
	printf("delete:");
	output(L);

	// int flag = modifyElem(L, 7, 100);
	// if (flag)
	// 	printf("success!\n");
	// else
	// 	printf("fail!\n");
	// printf("modified:");
	// output(L);

	// Node* p = findElem(L, 27);
	// printf("%d", p->data);//p��Node�ͣ�Ҫ��->ȡֵ
	return 0;
}