#include <stdio.h>
int main() {
    int n,t=1,p=0;
      scanf("%d",&n);
    int arr[100],i;
      for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
  for(i=0;i<n;i++) {
           int j;
           for(j=0;j<n;j++) {
                 if(arr[i]==arr[j]) t=t+1; }
        if(arr[i]==t)  p=1;
         t=1; }
    if(p==1)   printf("Yes");
    else printf("No");
    return 0; }