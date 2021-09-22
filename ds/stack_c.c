#include<stdio.h>
#include<stdlib.h>
int n;
struct key
{
	int data;
}a[20];
void push(int *top)
{
	if(*top==n)
		printf("stack overflow\n");
	else
	{
		int data;
		scanf("%d",&data);
		a[++*top].data=data;
	}
}
void pop(int *top)
{
	if(*top==-1)
		printf("stack is empty\n");
	else
		--*top;
}
void peek(int top)
{
	if(top==-1)
		printf("stack is empty\n");
	else
		 printf("%d",a[top].data);
}
void display(int top)
{
	if(top==-1)
		printf("stack is empty\n");
	else
		while(top!=-1)
			printf("%d\n",a[top--].data);
}
int main()
{
	int top=-1,choice;
	scanf("%d",&n);
	do{
	printf("________________________________________\n");
	printf("1.push\t2.show\t3.pop\t4.peek\t5.exit\n");
	printf("________________________________________\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			push(&top);
			break;
		case 2:
			display(top);
			break;
		case 3:
			pop(&top);
			break;
		case 4:
			peek(top);
			break;
		case 5:
			printf("exiting");
			break;
		default:
			printf("invalid choice\n");
			break;
	}
	}while(choice!=5);
	return 0;
}