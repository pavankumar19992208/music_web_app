#include<stdio.h>
#include<string.h>
void lps_1(char s[]){
    int len=0;int i=1;
    int m= strlen(s);
    int lps[m];lps[0]=0;
    while(i<m){
        if(s[i]==s[len]){
            len++;
            lps[i]=len;
            //printf("match %d",i);
            i+=1;
        }
        else{
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                //printf("%d",lps[i]);
                i+=1;
            }
        }
    }
}
void kmp(char s[],char t[]){
    int l= strlen(t);
    int m=strlen(s);
    int i=0,j=0; int lps[m];
    while(i<l-m+1){
        if(t[i]==s[j]){
            i+=1;j+=1;
        }
        if(j+1==m){
            printf("pattern found at position %d\n", i-j);
            j=lps[j-1];
        }
        else if(i < l && s[j] != t[i]){
            if(j!=0){
                j=lps[j-1];
}
            else{
                i+=1;
            }
        }
    }
}
void main(){
    char pat[20];char text[40];
    printf("ENTER TEXT PATTERN :\t");scanf("%s",text);
    printf("ENTER SEARCH PATTERN :\t");scanf("%s",pat);
    lps_1(pat);
    kmp(pat,text);
    return ;
}