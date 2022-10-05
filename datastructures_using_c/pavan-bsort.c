#include<stdio.h>
#include<conio.h>
#define max 5

int i;int j;int k; int x;int u;int t;int n;
void b_sort(int a[],int n){
for(i=0;i<n-1;i++){
for(j=0;j<n-i-1;j++){
if(a[j]>a[j+1]){
int temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
printf("\npass%d:-\t",i);
for(k=0;k<n;k++){
printf("%d,",a[k]);
}
}
printf("\n\nb_sort:-\t");
for(x=0;x<n;x++){
printf("%d,",a[x]);
}
return ;

}

int main(){
int d[max];
//clrscr();
printf("enter no of elements:-");
scanf("\t%d",&t);
max=t;
for(u=0;u<t;u++){
printf("\nenter elemnent%d:-",u+1);
scanf("%d",&n);
d[u]=n;
}
b_sort(d,t);
getch();
return 0;
}



