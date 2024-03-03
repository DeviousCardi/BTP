#include <stdio.h>
#include <string.h>
int count(int k,int n, int a[1000]){
    int i,count=0;
    for(i=0;i<n;i++){
        if(a[i]==k){count+=1;} }
    return count; }
int main() {
    int a[1000],n;
    scanf("%d\n",&n);
    int i=0;
    char s[1000];
    char temp[1000];
    scanf("%s",s);
    while(i<strlen(s)){
        if(s[i]!=','){temp[i]+=s[i];i++;printf("%d",a[i]);}
        else{i++;} }
    for(i=0;i<n;i++){
        if((count(a[i],n,a))!=a[i]){printf("No");return 0;} }
    printf("Yes");
    return 0; }