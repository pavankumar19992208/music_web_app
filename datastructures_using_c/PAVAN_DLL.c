#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;struct node*next;struct node*prev;
};int count;
struct node*head=NULL,*ptr=NULL;
struct node*temp=NULL,*temp1=NULL,*temp2=NULL;
void insert(int n){
temp=head;
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=n;ptr->next=NULL;ptr->prev=NULL;
if(head==NULL){
head=ptr;
return;
}
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=ptr;ptr->prev=NULL;
return;
}
void delete_by_pos(int pos){
temp=head;
if(head==NULL){
printf("list is empty:'cant delete'");
return;
}
if(pos==1){
temp=temp->next;
head=temp;
return;
}
count=1;
while(temp!=NULL){
temp1=temp;temp=temp->next;temp2=temp->next;
count++;
if(pos==count){
temp1->next=temp2;temp2->prev=temp1;
return;
}
}
return;
}
void insert_by_pos(int pos,int n){
temp=head;count=1;
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=n;ptr->next=NULL;ptr->prev=NULL;
if(pos==1){
if(head==NULL){
head=ptr;
return;
}
head=ptr;ptr->next=temp;temp->prev=head;
return;
}
if(head==NULL){
printf("position not found");
return ;
}
while(temp!=NULL){
temp1=temp;temp=temp->next;
count++;
if(pos==count){
temp1->next=ptr;ptr->next=temp;
temp->prev=ptr;ptr->prev=temp1;
return;
}
}
temp->next=ptr;ptr->prev=temp;
return;
}
void search(int n){
temp=head;
while(temp!=NULL){
if(n==temp->data){
printf("\nelement %d found",n);
return;
}
temp=temp->next;
}
printf("\nelement %d not found",n);
return ;
}

void display(){
temp=head;
if(head==NULL){
printf("list is empty");
return;
}
printf("\nelements are:");
while(temp!=NULL){
printf("\t%d",temp->data);
temp=temp->next;
}
return;
}
int main(){
clrscr();
insert(40);
insert(30);
insert(20);
insert(60);
insert_by_pos(2,15);
delete_by_pos(2);
search(30);
display();
search(25);
getch();
return 0;
}
