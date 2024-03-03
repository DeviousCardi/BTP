#include<stdio.h>
int max(int a,int b){
    if(a>b)return a;
    else return b; }
int min(int a,int b){
    if(a>b)return b;
    else return a; }
int main() {
    int a[20];
    int n,c,d,i,j,n1,n2;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]); }
    c=a[0],d=a[0];
    for(i=1;i<=n-1;i++){
        c=max(c,a[i]);
        d=min(d,a[i]); }
    for(i=0;i<=n-1;i++){
        if(a[i]==c)n1=i;
        if(a[i]==d)n2=i; }
    return 0; }