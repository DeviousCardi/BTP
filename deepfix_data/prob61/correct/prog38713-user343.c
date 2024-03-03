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
      for (i=0;i<=k;i++)
        count[i]=0;
      for (i=0;i<=k;i++) {
          for (j=0;j<n;j++) {
              if (input[j]==i)
                  count[i]++; }
        printf("%d\t",count[i]); }
    int total=0;
    int oldCount;
      for (i=0;i<=k;i++) {
         oldCount = count[i];
         count[i] =total;
         total += oldCount; }
      for (i=0;i<k;i++) {
          output[count[i]]=i; }
return 0; }