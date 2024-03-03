#include<stdio.h>
int num[100000]={};
int sum(int n)
{   int  static x=0;
    x=x+num[n];
    if(n<0) {
       return x; }
    else {
       return sum(n-1); } }
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
int x=sum(n-1);
printf("%d",x);
    return 0; }