#include<stdio.h>
int main() {
    int n,k;
     scanf("%d%d",&n,&k);
    int arr[n];
     for(int i=0;i<n;i++)
    scanf("%d",arr[i]);
    int count[k];
     for(int i=0;i<k;i++) {
          count[i]=0; }
    int output[k];
    int x,oldcount;
     for(int x=0;x<n;x++)
     { for(int=0;i<n;i++) {
           if(arr[i]==x)
            count[x]+=1; } }
    int total=0;
    for(int i=0;i<k;i++) {
          oldcount=count[i];
          count[i]=total;
          total+=oldcount; }
    for(int i=0;i<k;i++) {
        for(int x=0;x<n;x++) {
            if(output[count[x]]==x)
             count[x]+=1; } }
     for(int i=0;i<n;i++) {
         printf("%d",output[i]); }
      return 0; }