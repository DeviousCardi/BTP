#include<stdio.h>
int main(){
    int n,k,i,a,oldcount,total=0,j;
    scanf("%d",&n);
    scanf("%d",&k);
    int count[k+1];
    for(i=0;i<n;i++) {
        scanf("%d",&a);
        count[a]++; }
    for(i=0;i<k;i++)
    {if(total==n)
      break;
        oldcount=count[i];
        count[i]=total;
        total+=oldcount;
        for(j=0;j<oldcount;j++)
        printf("%d",i); } }