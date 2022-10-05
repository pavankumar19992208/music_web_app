#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define mx 5
int choice;int n;
int a[mx];
int rear=-1;int i;
void push(int n);
int pop();
void display_stack();
void push(int n){
rear++;
if(rear==mx){
printf("\nstack overflow");
return ;
}
a[rear]=n;
return ;
}
int pop(){
rear--;
if(rear==-1){
printf("\nstack is empty");
return 0;
}
return 0;
}
void display_stack(){
if(rear==-1){
printf("\nstack is empty");
return ;
}
if(rear>=0){
printf("stack elements are:");
for(i=0;i<=rear;i++){
printf("\t%d",a[i]);
}
return ;
}
return ;
}
int main(){
choice=0;
//clrscr();
while(choice!=4){
printf("\n1->push \n2->pop \n3->display \n4->end");
printf("\n\nenter choice:");
scanf("%d",&choice);
switch (choice){
case 1: printf("enter element to push:");scanf("%d",&n);push(n);display_stack();break;
case 2: pop();display_stack();break;
case 3: display_stack();break;
case 4: return 0;
}
}
getch();
return 1;
}
