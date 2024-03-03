#include<stdio.h>
int main() {
    int n,k;
    scanf("%d%d",n,k);
    int a[n];
    int output[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int count[k];
    for(int i=0;i<=k;i++)
    count[i]=0;
    for(int i=0;i<=k;i++)
    {for(int j=0;j<n;j++)
      if(a[j]==i)
      count[i]+=1; }
    int total=0;
    int oldcount=0;
    for(int i=0;i<=k;i++) {
    oldcount = count[i];
    count[i] = total;
    total += oldcount;
    while(count[i]<total)
       {  output[count[i]] = i;
    count[i] += 1; } }
     for(int i=0;i<n;i++)
    printf("%d",output[i]);
    return 0; }