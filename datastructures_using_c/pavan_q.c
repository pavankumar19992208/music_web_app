#include<stdio.h>
#include<conio.h>
//#include<stdlib.h>
#define max 5
int a[max];int i;int rear=-1,front=-1;
void addq(int n){
if((front==-1)&&(rear==-1)){
rear++;front++;
a[rear]=n;
rear++;
return;
}
if((rear==max)&&(front==0)||(rear==front)){
printf("queue is full\n");
return ;
}
if((rear==max)&&(front>0)){
rear=0;
}
a[rear]=n;
rear++;
return;
}
int deleteq(){
if((rear==-1)){
printf("queue is empty");
return 0;
}
if(rear==front+1){
rear=-1;front=-1;
return 0;
}
if(front==max-1){
front=0;
return 0;
}
front++;
return 0;
}
void display(){
if(rear==-1){
printf("\nstack is empty to display");
return ;
}
printf("stack elements are:\t");
if(front<rear){
for(i=front;i<rear;i++){
printf("%d\t",a[i]);
}
printf("\n");
return;
}
if(rear<=front){
for(i=front;i<max;i++){
printf("%d\t",a[i]);
}
for(i=0;i<rear;i++){
printf("%d\t",a[i]);
}
printf("\n");
return ;
}
return ;
}

int main(){
int choice=0;int e;
//clrscr();
printf("\n1->add \t2->delete \t3->display \t4->exit\n");
while(choice<=4){
printf("\nenter choice:\t");scanf("%d",&choice);
switch (choice){
case 1: printf("enter element:\t");scanf("%d",&e);addq(e);display();break;
case 2: deleteq();display();break;
case 3: display();break;
case 4: return 0;
}
}
getch();
return 0;
}