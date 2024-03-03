#include <stdio.h>
int count(int k,int n, int a[1000]){
    int i,count=0;
    for(i=0;i<n;i++){
        if(a[i]==k){count+=1;} }
    return count; }
int main(){
    int n;
    int a[1000];
    scanf("%d\n",&n);
    int ch;
    ch=getchar();
    int i=0;
    while(ch!=EOF){
        if(ch!=','){a[i]=ch;printf("%d",a[i]);i++;}
        ch=getchar(); }
    for(i=0;i<n;i++){
        if(count(a[i],n,a)!=a[i]){printf("No");return 0;} }
    printf("Yes");
    return 0; }