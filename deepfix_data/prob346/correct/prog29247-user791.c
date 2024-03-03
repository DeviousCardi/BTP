#include <stdio.h>
int main(){
    int freq[100],n,cost[5000],i,j;
    scanf("%d",&n);
    for(i=0;i<100;i++)
    freq[i]=0;
    for(i=0;i<n;i++)
    scanf("%d",&cost[i]);
     for(i=0;i<100;i++)
      for(j=0;j<n;j++)
        if(cost[j]==i)
         freq[i]++;
    for(j=0;j<100;j++)
    for(i=0;i<freq[j];i++)
    printf("%d ",j);
    printf("end");
    return 0; }