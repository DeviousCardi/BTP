#include <stdio.h>
int count(int k,int n, int a[1000]){
    int i,count=0;
    for(i=0;i<n;i++){
        if(a[i]==k){count+=1;} }
    return count; }
int main() {
    int a[1000],n;
    scanf("%d\n",&n);
    char ch;
    int i=0;
    ch=getchar();
    while(ch!=EOF){
        if(ch!=','){a[i]=ch-'0';i++;ch=getchar();}
        else{ch=getchar();} }
    for(i=0;i<n;i++){
        if((count(a[i],n,a))!=a[i]){printf("No");return 0;} }
    printf("Yes");
    return 0; }