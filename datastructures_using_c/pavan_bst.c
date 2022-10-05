#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int value;struct node*left;struct node*right;
};
struct node*root=NULL,*temp=NULL;int e;
void create(){
printf("enter element:\t");scanf("%d",&e);
temp=(struct node*)malloc(sizeof(struct node));
temp->left=NULL;temp->right=NULL;temp->value=e;
return;
}
void search(struct node *t){
if(temp->value<=t->value){
if(t->left!=NULL){
search(t->left);
}
if(t->left==NULL){
t->left=temp;return ;
}
}
if(temp->value>t->value){
if(t->right!=NULL){
search(t->right);
}if(t->right==NULL){
t->right=temp;return ;
}
}
return ;
}
void insert(){
create();
if(root==NULL){
root=temp;return;
}
search(root);
return;
}
void display(struct node*t){
if(t->left!=NULL){
display(t->left);
}
printf("\n->%d",t->value);
if(t->right!=NULL){
display(t->right);
}
}
int main(){
//clrscr();
insert();
insert();
insert();
insert();
insert();
insert();
display(root);
getch();
return 0;
}