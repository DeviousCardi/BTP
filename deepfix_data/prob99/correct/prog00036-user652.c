#include<stdio.h>
int main() {
    int n;
       scanf("%d",&n);
    int arr[20],i;
      for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    int m=1,count,j;
    for(i=0;i<n;i++) {
        count=1;
       j=i+1;
           while(arr[i]<arr[j]) {
               count++;
              if(count>m) {
                  m=count; }
             i=j;
             j++; } }
  printf("%d",m) ;
        return 0; }