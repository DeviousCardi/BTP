#include<stdio.h>
int main() {
    int n,i,j,count;
    scanf("%d",&n);
    int no[n];
    for(i=0;i<n;i++)
    { scanf("%d",&no[i]);}
   for(i=0;i<20;j++) {
     for(j=i+1;j<20;j++)
      if(no[i]<no[j]) {
          int temp=no[i];
          no[i]=no[j];
          no[j]=temp; }
    for(i=0;i<20;i++)
     printf("%d",no[i]); }
    return 0; }