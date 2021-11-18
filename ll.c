#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}*first=NULL;
void create(int a[],int n)
{
    struct node *t,*last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p){
    if(p!=NULL) {
        printf("%d ",p->data);
        display(p->next);
    }
}
int Rcount(struct node *p){
   
    if(p==0){
        return 0;
    }
   else
       return Rcount(p->next)+1;
}
int Radd(struct node *p){
    if(p==0)
        return  0;
    else
        return Radd(p->next)+p->data;
}

 int count(struct node *p){
    int c=0;
     while(p!=0){
         c++;
         p=p->next;
     }
     return  c;
 }
int add(struct node *p){
    int sum = 0;
    while(p){
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}
void bget(int x){
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=x;
    t->next=first;
    first=t;
}
void insert(struct node *p,int index,int x ){
    if(index<0||index>Rcount(p))
        return;
    else{
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=x;
        if(index ==0){
            t->data=x;
            first=t;
        }
        else{
            for (int i=0; i<index-1; i++) {
                p=p->next;
                t->next=p->next;
                p->next=t;
            }
        }
    }
}
int max(struct node *p){
    int m=INT32_MIN;
    while(p){
        if(p->data>m)
            m=p->data;
        p=p->next;
    }
    return m ;
}
//void insertlast(struct node *p,int x){
//    struct node *t,*last;
//    last=(struct node *)malloc(sizeof(struct node ));
//    t=(struct node *)malloc(sizeof(struct node ));
//    t->data=x;
//    t->next=NULL;
//     if(first==NULL)
//         first=last=t;
//     else{
//        last->next=t;
//         last=t;
//     }
//}
int del(struct node *p,int index){
    int x=-1;
    struct node *q=NULL;
    if(index<0 or index>count(p))
        return -1;
    if(index==0)
    {
        q=first;
        x=first->data;
        first=first->next;
        free(q);
        return x;
    }
    else{
        for(int i=0;i<index;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        free(p);
        return x;
        
    }
}
int main(){
    int a[]={3,5,6,2,4};
    create(a,5);
    display(first);
    printf("\nNumber of nodes are: %d \n",Rcount(first));
    printf("Addition of data are: %d \n",Radd(first));
    printf("max of data are: %d \n",max(first));
    insert(first,2,9);
    printf("%d\n",del(first,2));
//    insertlast(first, 5);
//    insertlast(first, 8);
//    insertlast(first, 9);
    display(first);
    

}
