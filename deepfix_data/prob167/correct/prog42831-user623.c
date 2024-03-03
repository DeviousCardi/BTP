#include<stdio.h>
int sum(int n,int num[n])
{   int static x=0;
    if(n==0)
    return x+num[n];
    else
    {   printf("%d>>\n",num[n]);
        x=x+num[n];
       return sum(n-1,num); } }
int main() {
    int n,i;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
    int res=sum(n,num);
    printf("%d",res);
    return 0; }