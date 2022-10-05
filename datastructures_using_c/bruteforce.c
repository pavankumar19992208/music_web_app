// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
void search(char t[],char s[]){
    int l =strlen(t);
    int m =strlen(s);int i,j;
    for(i=0;i<=l-m;i++){
        for(j=0;j<m;j++){
            if(t[i+j]!=s[j]){
                break;
            }
            if(j=m){
                printf("PATTERN FOUND AT POSITION %d\n",i+1);
            }
        }
    }
}
void main(){
    char text[40],pat[20];
    printf("ENTER TEXT PATTERN:\t");scanf("%s",text);
    printf("ENTER SEARCH PATTERN:\t");scanf("%s",pat);
    search(text,pat);
    return;
}