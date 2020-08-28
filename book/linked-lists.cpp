#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
typedef struct _node     //声明结构
{
    int value;
    struct _node *next;
}Node;
int main(int argc,char const *argv[]){
    int number;
    Node *head = NULL;
    do{
        scanf("%d",&number);
        if(number != -1){
            //添加到链表中
            Node *p = (Node*)malloc(sizeof(Node));
            p->value=number;
            p->next=NULL;
            //找到上一个
            Node *last=head;
            if(last){
                while (last->next != NULL)
                {
                    last = last->next;
                }
                last->next = p;
            }else{
                head=p;
            }
        }
    }while (number != -1);
    



    return 0;
}