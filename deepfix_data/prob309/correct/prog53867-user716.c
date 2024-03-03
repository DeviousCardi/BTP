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
    scanf("%s",s);
    int j=0;
    while(i<strlen(s)){
        int count=0;
        if(s[i]!=','){a[j]+=(s[i]-'0')*(count+1);i++;count++;}
        else{i++;j++;} }
    for(i=0;i<n;i++){
        if((count(a[i],n,a))!=a[i]){printf("No");return 0;} }
    printf("Yes");
    return 0; }