// 使用链表构建学生信息库
#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
typedef struct stud_node{
    int num;
    char name[20];
    int score;
    struct stud_node *next;
}student;

student *Create_Stu_Doc();
student *InsertDoc(student *head,student *stud);
student *DeleteDoc(student *head,int num);
student *UpdateDoc(student *head,int num,int score);
void Print_stu_Doc(student *head);

int main(void){
    student *head,*p;
    int choice,num,score;
    char name[20];
    int size=sizeof(student);

    do{
        printf("1:Create\n");
        printf("2:Insert\n");
        printf("3:Delete\n");
        printf("4:Print\n");
        printf("5:Update\n");
        printf("0:Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            head=Create_Stu_Doc();
            break;
        case 2:
            printf("Input num,name and score:\n");
            scanf("%d%s%d",&num,name,&score);
            p=(student*) malloc(size);
            p->num=num;
            strcpy(p->name,name);
            p->score=score;
            head=InsertDoc(head,p);
            break;
        case 3:
            printf("Input num: \n");
            scanf("%d",&num);
            head=DeleteDoc(head,num);
            break;
        case 4:
            Print_stu_Doc(head);
            break;
        case 5:
            printf("Input num and score:\n");
            scanf("%d%d",&num,&score);
            UpdateDoc(head,num,score);
            printf("Update sucessed\n");
        case 0:
            break;
        }
    }while(choice != 0);

    return 0;
}

student *Create_Stu_Doc(){
    student *head,*p;
    int num,score;
    char name[20];
    int size=sizeof(student);

    head=NULL;
    printf("Input num,name and score:\n");
    scanf("%d%s%d", &num, name, &score);
    while (num!=0)
    {
        p = (student *)malloc(size);
        p->num = num;
        strcpy(p->name, name);
        p->score = score;
        head = InsertDoc(head, p);
        scanf("%d%s%d", &num, name, &score);
    }
    return head;
}

student *InsertDoc(student *head,student *stud){
    student *ptr,*ptr1,*ptr2;  

    ptr2=head;                  
    ptr=stud;

    if(head==NULL){
        head=ptr;
        head->next=NULL;
    }else
    {
        while ((ptr->num > ptr2->num)&&(ptr2->next != NULL) )
        {
            ptr1=ptr2;              
            ptr2=ptr2->next;        
        }
        //循环执行完成后 ptr1 ptr ptr2 的关系为 ptr1->ptr->ptr2 或者 ptr2为末尾;
        if(ptr->num <= ptr2->num){  
            if(head==ptr2)  head=ptr;  //如果是最小的
            else   ptr1->next=ptr;
            ptr->next=ptr2;
        }
        else                            //为最大的
        {
            ptr2->next=ptr;
            ptr->next=NULL;
        }
    }
    return head;
}

student *DeleteDoc(student *head,int num){
    student *ptr1,*ptr2;

    while (head!=NULL && head->num == num)
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
        if(ptr2->num==num){
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
void Print_stu_Doc(student *head){
    student *ptr;
    if(head==NULL){
        printf("\n No Records \n");
        return;
    }
    printf("\n The Student's Records Are: \n ");
    printf("Num \t Name \t Score \n");
    for(ptr=head;ptr!=NULL;ptr=ptr->next)
        printf("%d\t%s\t%d\n",ptr->num,ptr->name,ptr->score);
}

student *UpdateDoc(student *head,int num,int score){
    student *ptr;
    
    if(head==NULL){
        return NULL;
    }
    ptr=head;
    while (ptr!=NULL)
    {
        if(ptr->num == num){
            ptr->score = score;
        }
        ptr=ptr->next;
    }
    return head;
}

