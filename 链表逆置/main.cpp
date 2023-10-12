#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<stdio.h>
#include<stdlib.h>

typedef struct lnode {
	int data;
	struct lnode* next;
}lnode,*linklist;

int a[5];
char str[200];

void buildlist(linklist& L) {
	L = (lnode*)malloc(sizeof(lnode));
	lnode* r = L;
	lnode* s;
	for (int i = 0; i < 4; i++) {
		s = (lnode*)malloc(sizeof(lnode));
		s->data = a[i];
		r->next = s;
		r = s;
	}
	r->next = NULL;
}

void disp(linklist L) {
	lnode* p = L->next;
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
}

//逆序函数
void reverse(linklist& L) {
	lnode* p = L->next;//第一个数据节点
	L->next = NULL;//断链
	lnode* q = p;
	while (q != NULL) {
		q = p->next;
		p->next = L->next;
		L->next = p;
		p = q;
	}
}


int main() {
	FILE *fp = fopen("D:\\input.txt", "r");
	int i = 0;
	while (fgets(str, 200, fp)) {
		a[i] = atoi(str);
		i++;
	}
	linklist L;
	buildlist(L);
	disp(L);
	reverse(L);
	disp(L);
}
