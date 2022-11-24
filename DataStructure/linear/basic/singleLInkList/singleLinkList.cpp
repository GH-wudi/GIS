/**
 * C 语言: 单向链表及其操作
 *
 * @author wfh
 * @date 2022/11/11
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct Node//what is typedef
{
	int data;
	struct Node* next;
}Node;
void initList(Node*& L, int a[], int l);
void output(Node* L);

void output(Node* L)
{
	Node* p = L;//有头结点
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
	Node* r = L;
	for (int i = 0; i < l; i++)
	{
		Node* n = (Node*)malloc(sizeof(Node));
		n->data = a[i];
		r->next = n;
		r = r->next;
	}
	r->next = NULL;
}
Node* insertElem(Node* L, int index, int data)
{
	Node* p = L;
	for (int i = 0; i < index; i++)
	{
		if (p->next == NULL)//p->next和p的区别
		{
			printf("out of index!\n");
			return L;
		}

		p = p->next;
	}
	Node* n = (Node*)malloc(sizeof(Node));
	n->data = data;
	n->next = p->next;
	p->next = n;
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

int findDeleteElem(Node* L, int x)//&是错误的，为什么？
{
	Node* p = L;
	while (p->next != NULL)
	{
		//这种写法确实查不到最后一个
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
		Node* q = p->next;//上述代码有break，所以要赋值为p->next
		p->next = p->next->next;
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
	Node* L = NULL;//这是main函数内部的局部变量
	initList(L, num, len);//指针类型不用加&
	printf("init:  ");
	output(L);//声明函数
	printf("\n");

	// L = insertElem(L, 8, 101);
	// printf("insert:");
	// output(L);

	// printf("\n");
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

	// Node* p = findElem(L, 102);
	// printf("%d", p->data);//p是Node型，要用->取值
	return 0;
}