#include<iostream>
using namespace std;
int front=-1,rear=-1,n;
int queue[10];
bool isempty()
{
	if(rear==-1 and front==-1)
		return true;
	else 
		return false;
}
void enqueue()
{	int data;
	if(rear==n-1)
		cout<<"queue overflow";
	else
	{
		if(front==-1)
			front=0;
		cin>>data;
		queue[++rear]=data;

	}
}
void dequeue()
{
	if(isempty())
		cout<<"queue underflow";
	else if(front==rear)
		rear=front=-1;
	else
		front++;
}

void show()
{
	if(isempty())
		cout<<"queue is empty";
	else
	{
		cout<<"queue is:\n";
		for(int i=front;i<=rear;i++)
			cout<<queue[i]<<"\n";
	}
}
void peek()
{
	if(isempty())
		cout<<"queue is empty";
	else
		cout<<queue[front];
}
int main()
{	cin>>n;
	int choice;
	do{
	cout<<("________________________________________\n");
	cout<<("1.add\t2.show\t3.delete\t4.peek\t5.exit\n");
	cout<<("\n________________________________________\n");
	cin>>choice;
	switch(choice)
	{
		case 1:
			enqueue();
			break;
		case 2:
			show();
			break;
		case 3:
			dequeue();
			break;
		case 4:
			peek();
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
