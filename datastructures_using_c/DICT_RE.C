#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int value;struct node*next;int key;
};
struct node*head=NULL,*ptr=NULL;
struct node*temp=NULL,*temp1=NULL,*temp2=NULL;
void insert(int k , int n){
temp=head;
ptr=(struct node*)malloc(sizeof(struct node));
ptr->key=k;ptr->value=n;ptr->next=NULL;
if(head==NULL){
head=ptr;
return;
}
if(k<head->key){
head=ptr;ptr->next=temp;
return;
}
while(temp!=NULL){

if(k<temp->key){
temp2->next=ptr;
ptr->next=temp;
return;
}
temp2=temp;
temp=temp->next;

}
temp2->next=ptr;
return;
}
void del(int k){
temp=head;
if(head==NULL){
printf("dict is empty");
return;
}
if(k==head->key){
head=temp->next;
temp=head;
return;
}
while(temp!=NULL){
temp1=temp;
temp=temp->next;
temp2=temp->next;
if(k==temp->key){
temp1->next=temp2;
return;
}
}
return;
}
void search(int k){
temp=head;
while(temp!=NULL){
if(k==temp->key){
printf("\nelement found with key %d is %d",temp->key,temp->value);
return ;
}
temp=temp->next;
}
return;
}
void display(){
temp=head;
if(head==NULL){
printf("dict is empty");
return;
}
printf("elements of dict are:");
while(temp!=NULL){
printf("\n%d\t:\t%d",temp->key,temp->value);
temp=temp->next;
}
return;
}
int main(){
clrscr();
insert(2,38);
insert(1,57);
insert(3,45);
insert(6,75);
insert(5,40);
insert(7,49);
insert(4,59);
del(5);
display();
search(3);
getch();
return 0;
}


