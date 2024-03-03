#include <stdio.h>
int main() {
    int n,p=0;
      scanf("%d",&n);
   char arr[100];
     int i;
      for(i=0;i<(2*n-1);i++)
      { scanf("%c",&arr[i]);
      printf("%c",arr[i]);}
     int arr1[100];
      for(i=0;i<n;i++)
          {arr1[i]=arr[(2*i)]-'1';
              printf("%d",arr1[i]); }
  for(i=0;i<n;i++)
       {int t=0;
       p=0;
           int j;
           for(j=0;j<n;j++) {
                 if(arr1[i]==arr1[j]) t=t+1; }
         if(arr1[i]==t)  p=1;
         if(arr1[i]!=t)  break; }
    if(p==1)   printf("Yes");
    else printf("No");
    return 0; }