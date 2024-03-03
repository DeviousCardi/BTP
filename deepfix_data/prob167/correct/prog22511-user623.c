#include<stdio.h>
int num[100000]={};
long int sum(int n)
{   long int static x=0;
    x=x+num[n];
    if(n<0) {
       return x; }
    else {
       return sum(n-1); } }
int main() {
    long int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
 long int x=sum(n-1);
printf("%ld",x);
    return 0; }