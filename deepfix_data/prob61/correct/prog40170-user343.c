#include<stdio.h>
int main() {
    int n,k;
         scanf("%d%d",&n,&k);
    int i,j;
    int input[n];
      for (i=0;i<n;i++)
         scanf("%d",&input[i]);
    int count[k+1];
    int output[n];
      for (i=0;i<=k;i++) {
        count[i]=0;
          for (j=0;j<n;j++) {
              if (input[j]==i)
                  count[i]++; } }
    int total=0;
    int oldCount;
      for (i=0;i<=k;i++) {
         oldCount = count[i];
         count[i] =total;
         total += oldCount; }
      for (i=0;i<n;i++) {
        int x;
          x=input[i];
          output[count[x]]=x;
          count[x] +=1; }
      for (i=0;i<n;i++) {
          printf("%d ",output[i]); }
return 0; }