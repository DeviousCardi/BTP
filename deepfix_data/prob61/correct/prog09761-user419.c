#include<stdio.h>
int main(){
    int n,i,j,k,total=0;
    scanf("%d %d",&n,&k);
    int arr[n],count[k+1],output[n];
    int oldCount;
      for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        for(i=0;i<k+1;i++)
        count[i]=0;
      for(i=0;i<n;i++)
        count[i]+=1;
      for(i=0;i<k;i++){
          oldCount=count[i];
          count[i]=total;
          total+=oldCount; }
      for(i=0;i<n;i++)
    {output[count[arr[i]]] = arr[i]; count[arr[i]] += 1;}
      for(i=0;i<n;i++){
        printf("%d",arr[i]); } }