#include <stdio.h>
int main() {
    int n,t=0,p=0;
      scanf("%d",&n);
    char arr[100];
     int i;
      for(i=0;i<2*n;i++)
       scanf("%c",&arr[i]);
     char arr1[100];
      for(i=0;i<=(2*n-1);i++)
          arr1[i]=arr[(2*i)];
  for(i=0;i<n;i++) {
           int j;
           for(j=0;j<n;j++) {
                 if(arr1[i]==arr1[j]) t=t+1; }
        if(arr1[i]==t)  p=1;
        if(arr1[i]!=t)  break;
         t=0; }
    if(p==1)   printf("Yes");
    else printf("No");
    return 0; }