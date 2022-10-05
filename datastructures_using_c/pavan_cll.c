#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;struct node*next;struct node*prev;
};
struct node*head=NULL,*ptr=NULL;
struct node*temp=NULL,*temp1=NULL;int p,i,e;int count;
void insert(int n){
temp=head;
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=n;ptr->next=NULL;ptr->prev=NULL;
if(head==NULL){
head=ptr;ptr->next=head;
return ;
}
while(temp->next!=head){
temp=temp->next;
}
temp->next=ptr;ptr->prev=temp;ptr->next=head;head->prev=ptr;return ;
}
void insert_by_pos(int pos,int n){
temp=head;count=1;
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=n;ptr->next=NULL;ptr->prev=NULL;
if(pos==1){
if(head==NULL){
head=ptr;return ;
}
head=ptr;ptr->next=temp;temp->prev=ptr;
return ;
}
while(temp->next!=head){
count++;
temp1=temp->next;
if(pos==count){
temp->next=ptr;ptr->prev=temp;
ptr->next=temp1;temp1->prev=ptr;
return ;
}
temp=temp->next;
}
if(temp->next==head){
temp->next=ptr;ptr->next=head;
head->prev=ptr;ptr->prev=temp;return ;
}
return;
}
int count_nodes(){
int count=1;temp=head;
while(temp->next!=head){
count++;temp=temp->next;
}
printf("no of nodes :- \t%d",count);
return 0;
}
void delete_by_pos(int pos){
temp=head;count=1;
if(head==NULL){
printf("list is empty to delete");
return ;
}
if(pos==1){
temp=head->next;temp->prev=NULL;
head=temp;return ;
}
while(temp->next!=head){
count++;temp1=temp->next->next;
if(pos==count){
temp->next=temp1;temp1->prev=temp;return ;
}
temp=temp->next;
}
return ;
}
void search(int n){
temp=head;
while(temp->next!=head){
if(temp->data==n){
printf("the element %d found",n);return ;
}
temp=temp->next;
}
if(temp->next==head){
if(temp->data==n){
printf("the element %d found",n);return ;
}
}
printf("the element %d not found",n);
return ;
}
void display(){
temp=head;
if(head==NULL){
printf("\nlist is empty to display");return ;
}
printf("the list elements are:\t");
while(temp->next!=head){
printf("%d\t",temp->data);
temp=temp->next;
}
if(temp->next==head){
printf("%d\t",temp->data);
return;
}
return ;
}
int main(){
int choice=0;//clrscr();
while(choice!=7){
printf("\n\n>>>1->insert\t2->insert at position\t3->delete at position\n>>>4->count nodes\t5->search\t6->dislay\t7->exit");
printf("\n\nenter choice:\t");scanf("%d",&choice);
switch (choice){
case 1:printf("enter element:\t");scanf("%d",&e);insert(e);display();break;
case 2:printf("enter position:\t");scanf("%d",&p);printf("enter element:\t");scanf("%d",&e);insert_by_pos(p,e);display();break;
case 3:printf("enter position:\t");scanf("%d",&p);delete_by_pos(p);display();break;
case 4:count_nodes();break;
case 5:printf("enter element:\t");scanf("%d",&e);search(e);break;
case 6:display();break;
case 7: return 0;
default : printf("\nenter valid choice number");break;
}
}
return 0;
}