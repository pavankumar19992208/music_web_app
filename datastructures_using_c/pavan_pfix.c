#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define mx 50
int top=-1;char stack[mx];char infix[mx];char postfix[mx];char c,next;char symbol;int i;
int j=0;
void push(char c){
if(top==mx-1){
printf("stack overflow");
return ;
}
top++;
stack[top]=c;
return ;
}
char pop(){
if(top<0){
printf("stack is empty");
return 0;
}
c=stack[top];
top--;
return c;
}
int space(char c){
if( c == ' ' || c == '\t'){
     return 1;
}
else{
    return 0;
}
}
void print(){
printf("\nthe equivalent postfix expression is:\t");
for(i=0;i<strlen(postfix);i++){
printf("%c",postfix[i]);
}
return ;
}
int precedence(char symbol){
switch (symbol){
case '^':return 3;
case '*':
case '/':return 2;
case '+':
case '-':return 1;
default : return 0;
}
}

void intopfix(){
for(i=0;i<strlen(infix);i++){
symbol=infix[i];
if(space(symbol)==0){
switch (symbol){
case '(':push(symbol);break;
case ')':while((next=pop())!='('){
	 postfix[j++]=next;
	 }
	 break;
case '^':
case '*':
case '/':
case '+':
case '-':while((top != -1)&&(precedence(stack[top]) >= precedence(symbol))){
	 postfix[j++]=pop();
	 }
	 push(symbol);break;
default : postfix[j++]=symbol;break;
}
}
}
while(top!=-1){
postfix[j++]=pop();
}
postfix[j]='\0';
return ;
}
int main(){
//clrscr();
printf("\nenter expression:\t");gets(infix);
intopfix();
print();
//printf("%d",top);
//printf("%d",space(infix[1]));
//for(i=0;i<=strlen(infix);i++){
//printf("%c",infix[i]);
//}
//printf("len:%d",strlen(postfix));
getch();
return 0;
}