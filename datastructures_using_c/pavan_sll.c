#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;struct node*next;
};int count;
struct node*head=NULL,*ptr=NULL;
struct node*temp=NULL,*temp1=NULL,*temp2=NULL;
void insert(int n){
temp=head;
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=n;ptr->next=NULL;
if(head==NULL){
head=ptr;
return;
}
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=ptr;
return;
}
void delete_by_pos(int pos){
temp=head;
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
temp1->next=temp2;
return;
}
}
return;
}
void insert_by_pos(int pos,int n){
temp=head;
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=n;ptr->next=NULL;
if(pos==1){
if(head==NULL){
head=ptr;
return;
}
head=ptr;ptr->next=temp;
return;
}
count=1;
while(temp!=NULL){
temp1=temp;temp=temp->next;
count++;
if(pos==count){
temp1->next=ptr;ptr->next=temp;
return;
}
}
temp1->next=ptr;
return;
}
void display(){
temp=head;
while(temp!=NULL){
printf("\t%d",temp->data);
temp=temp->next;
}
return;
}
int main(){
//clrscr();
insert(40);
insert(30);
insert(20);
insert(60);
insert_by_pos(2,15);
insert_by_pos(3,45);
delete_by_pos(5);
display();
getch();
return 0;
}
