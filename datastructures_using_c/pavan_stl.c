#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
int data;struct node*next;
};
struct node*top=NULL,*temp=NULL,*base=NULL;int e;
void push(int n){
temp=(struct node*)malloc(sizeof(struct node));
temp->data=n;temp->next=NULL;
if(top==NULL){
top=temp;base=top;return ;
}
top->next=temp;top=temp;return ;
}
void display(){
temp=base;
if(temp==NULL){
printf("stack is empty");
return ;
}
printf("stack elements are:\t");
while(temp!=NULL){
printf("%d\t",temp->data);
temp=temp->next;
}
return ;
}
int pop(){
if(base==NULL){
printf("stack is empty to delete");
return 0;
}
temp=base;
while(temp->next!=top){
temp=temp->next;
}
temp->next=NULL;top=temp;return 0;
}
int main(){
int choice=0;//clrscr();
printf("         &&-----------------MENU--------------------&&");
printf("\n  1-> PUSH  \t2-> POP  \t3-> DISPLAY  \t4-> EXIT");
while(choice>=0){
printf("\n\nENTER CHOICE :\t");scanf("%d",&choice);
switch(choice){
case 1: printf("ENTER ELEMENT :\t");scanf("%d",&e);push(e);display();break;
case 2:pop();display();break;
case 3:display();break;
case 4: return 0;
}
}
getch();
return 0;
}



