#include <stdio.h>
#include <string.h>
int count(char k[1000],int n, int a[1000]){
    int i,count=0;
    for(i=0;i<n;i++){
        if(a[i]==k){count+=1;} }
    return count; }
int main() {
    char a[1000],n;
    scanf("%d\n",&n);
    char ip[1000];
    int i=0;
    char s[1000];
    scanf("%s",s);
    int j=0,k=0;
    while(i<strlen(s)){
        if(s[i]!=','){a[j]=s[i];i++;j++;}
        else{ip[k]=a;k++;i++;} }
    for(i=0;i<n;i++){
        if((count(ip[i],n,ip))!=ip[i]){printf("No");return 0;} }
    printf("Yes");
    return 0; }