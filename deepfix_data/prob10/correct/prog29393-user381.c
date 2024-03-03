#include<stdio.h>
int main() {
    int i,j,n;
    int count ;
    count=0;
    scanf("%d",&n);
    printf("%d",n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(j=0;j<n;j++)
    {  if(a[i+1]>=a[i]);
      b[j]=a[i];
      count=count+1;}
      printf("%d",count);
    return 0; }