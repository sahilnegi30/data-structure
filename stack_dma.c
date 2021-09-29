#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
}*top = NULL;
int n;
void push();
void pop();
void print_top();
int st_count();
void stack_count();
int main()
{
    int choice;
    printf("Enter the length of stack\n");
    scanf("%d",&n);
    while (1)
    {
        printf("1. push an element \n");
        printf("2. pop an element \n");
        printf("3. Print top of the stack \n");
        printf("4. count/display elements present in stack \n");
        printf("5. exit \n");
        printf("Enter your choice \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:    
            push();
            break;         
        case 2:    
            pop();
            break;                                    
        case 3:    
            print_top();
            break;
        case 4:
            stack_count();
            break;
        case 5:    
            exit(0);
        default:
            printf("wrong choice\n");         
        }
    }
    return 0;
}

void push()
{
    int val,count;
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
 
    count = st_count();
    if (count <= n - 1)
    {
        printf("\nEnter value which you want to push into the stack :\n");
        scanf("%d",&val);
        temp->data = val;
        temp->link = top;
        top = temp;
    }
    else
        printf("WARNING: STACK FULL\n");
}
 

void pop()
{
    struct node *temp;
    if (top == NULL)
        printf("**Stack is empty**\n");
    else
    {
        temp = top;
        printf("Value popped out is %d \n",temp->data);
        top = top->link;
        free(temp);
    }
}

void print_top()
{
    if (top == NULL)
        printf("\n**Top is not available for an EMPTY stack**\n");
    else
        printf("\nTop of the stack is %d \n",top->data);
}
void stack_count()
{
    int count = 0;
    struct node *temp;
 
    temp = top;
    while (temp != NULL)
    {
        printf(" %d\n",temp->data);
        temp = temp->link;
        count++;
    }
    printf("size of stack is %d \n",count);
}
int st_count()
{
    int count = 0;
    struct node *temp;
    temp = top;
    while (temp != NULL)
    {
        temp = temp->link;
        count++;
    }
    return count;
}