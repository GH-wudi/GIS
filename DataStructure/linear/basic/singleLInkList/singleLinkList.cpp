/**
 * C 语言: 单向链表
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

int main()
{
	int num[] = { 49,38,65,97,76,13,27,49 };
	int len = sizeof(num) / sizeof(*num);
	Node* L = NULL;//这是main函数内部的局部变量
	initList(L, num, len);//指针类型不用加&
	output(L);//声明函数
	return 0;
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

void output(Node* L)
{
	Node* p = L;//有头结点
	while (p->next)
	{
		p = p->next;
		printf("%d->", p->data);
	}
}

