#include<stdio.h> 
#include<stdlib.h>
typedef struct odd_node{
    int num;
    struct odd_node *next;
}odd;

int main(void){
    odd *L=NULL,*p,*ptr1,*ptr2,*head=NULL;
    
    int num,size=sizeof(odd);
    scanf("%d",&num);
    while (num!=-1)
    {
        p=(odd *)malloc(sizeof(size));
        p->num=num;
        
        if(L==NULL){
            p->next=NULL;
            L=p;
        }else
        {
            ptr1=L;
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
    printf("The Old_node's num:\n");
    for(p=L;p!=NULL;p=p->next)
        printf("%d ",p->num);
    

    for(p=L;p!=NULL;p=p->next){
        if((p->num)%2!=0){
            head=p;
            break;
        }
    }

    ptr1=head;

    for(p=head->next;p!=NULL;p=p->next){
        if((p->num)%2!=0){
            ptr1->next=p;
            ptr1=ptr1->next;
        }
    }

    ptr1->next=NULL;
    printf("\nThe New_node's num:\n");
    for(p=head;p!=NULL;p=p->next)
        printf("%d ",p->num);

    return 0;
}