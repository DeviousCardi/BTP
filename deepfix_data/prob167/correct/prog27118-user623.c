#include<stdio.h>
int sum(int n,int num[n])
{   long long  static x=0;
    if(n-1==0) {
        x=x+num[n-1];
        return x; }
    else {
        x=x+num[n-1];
       return sum(n-1,num); } }
int main() {
    int n,i;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
long long x=sum(n,num);
printf("%ld",x);
    return 0; }