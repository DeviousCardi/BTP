#include<stdio.h>
int recur(int a[],int n,int i){
    static int r=0;
    scanf("%d ",&a[i]);
    r-=a[i];
    printf("%d  ",r);
    if(n==1){
    int t=r+2*a[0];
    return t; }
    else
    return recur(a,n-1,i++); }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    printf("%d",recur(a,n,0));
    return 0; }