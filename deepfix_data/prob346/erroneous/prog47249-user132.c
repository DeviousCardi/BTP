#include <stdio.h>
int min (int a,int b)
    {if(a>=b)
    return b;
    else
    return a;}
int main(){
    int n,arr[10000],sum=0,num[100];
    scanf("%d",&n);
    for(i=0;i<n;i=i+1)
    {scanf("%d",&arr[i]);}
    for(i=0;i<=99;i=i+1)
    {  for(j=0;j<n;j=j+1)
       { if(arr[j]==i)
        sum=sum+1;}
        num[i]=sum;
        for(k=1;k<=sum;i=i+1)
        printf("%d",i);}
        printf("end");