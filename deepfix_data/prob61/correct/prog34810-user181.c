#include<stdio.h>
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int array[n];
    for(int i=0;i<n;i++)
    scanf("%d",&array[i]);
   int count[k+1];
    for(int i=0;i<=k;i++)
    count[i]=0;
    for(int i=0;i<n;i++)
    count[array[i]]++;
    int oldcount,total=0;
    for(int i=0;i<=k;i++)
    {oldcount=count[i];
    count[i]=total;
    total+=oldcount;}
     for(int i=0;i<=k;i++)
   printf("%d ",count[i]);
   int output[n];
    int i=0;
    while(i<=k) {
     if(count[i]<count[i+1])
     {output[count[i]]=i;
     count[i]++;}
     i++; }
    for(int i=0;i<n;i++)
    printf("%d ",output[i]);
    return 0; }