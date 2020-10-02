#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

}*first=NULL;

void create(int a[],int n)
{
    int i;
    struct node *t,*last;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void Display(struct node *p)
{

    while(p)
    {
        printf("%d",p->data);
        p=p->next;
    }
}

//Display using recursion
void rdisplay(struct node *p)
{
    if(p)
    {

        printf("%d ",p->data);
        rdisplay(p->next);
    }
}



int main(){
    struct node *temp;
    int a[]={3,5,7,10,25,8,32,2};
    create(a,8);

    rdisplay(first);
return 0;
}
