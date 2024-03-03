#include<stdio.h>
int num[100000]={};
int sum(int n,int num[n])
{   int  static x=0;
    if(n-1==0) {
        x=x+num[n-1];
        return x; }
    else {
        x=x+num[n-1];
       return sum(n-1,num); } }
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
int x=sum(n,num);
printf("%d",x);
    return 0; }