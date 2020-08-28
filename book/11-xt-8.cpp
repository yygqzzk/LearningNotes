#include<stdio.h> 
#include<stdlib.h>
typedef struct num_node{
    int num;
    struct num_node *next;
}Num;
Num *Delete_node(Num *head,int n);
int main(void){
    Num *p=NULL,*ptr1=NULL,*ptr2=NULL,*head=NULL;
    int num,size=sizeof(Num),n;


    scanf("%d",&num);
    while (num!=-1)
    {
        p=(Num *)malloc(sizeof(size));
        p->num=num;
        
        if(head==NULL){
            p->next=NULL;
            head=p;
        }else
        {
            ptr1=head;
            ptr2=ptr1->next;
            while (ptr2!=NULL)
            {
                ptr1=ptr2;
                ptr2=ptr2->next;
            }
            ptr1->next=p;
            p->next=NULL;
        }
        scanf("%d",&num);
    }


    scanf("%d",&n);

    head=Delete_node(head,n);

    for(p=head;p!=NULL;p=p->next)
        printf("%d ",p->num);

    return 0;
};
Num *Delete_node(Num *head,int n){
    Num *ptr1,*ptr2;

    while (head!=NULL && head->num == n)
    {
        ptr2=head;
        head=head->next;
        free(ptr2);
    }
    if(head==NULL)
        return NULL;
    ptr1=head;
    ptr2=head->next;
    while (ptr2 != NULL)
    {
        if(ptr2->num==n){
            ptr1->next=ptr2->next;
            free(ptr2);
        }else
        {
            ptr1=ptr2;
        }
        ptr2=ptr1->next;
    }
    return head;
}

