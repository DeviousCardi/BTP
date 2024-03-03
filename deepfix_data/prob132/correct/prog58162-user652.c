#include <stdio.h>
int main() {
    int n,p=0;
      scanf("%d",&n);
   char arr[100];
     int i;
      for(i=0;i<(2*n-1);i++)
      { scanf("%c",&arr[i]);}
      printf("%c",arr[1]);
     int arr1[100];
      for(i=0;i<n;i++)
          {arr1[i]=arr[(2*i)]-'0';
              printf("%d",arr1[i]); }
    return 0; }