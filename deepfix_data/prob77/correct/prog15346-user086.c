#include <stdio.h>
int main() {
    int a,b[1000];
    int max=b[0],j=0,k=0,i,min=b[0];
    scanf("%d",&a);
    for(i=0;i<a;i++) {
    scanf("%d",&b[i]); }
    for(i=0;i<a;i++)
    {if(b[i]>=max) {
          max=b[i];
      j=i; }
      if(b[i]<=min) {
          min=b[i];
          k=i; } }
       b[j]=min;
       b[k]=max;
       for(i=0;i<a;i++) {
           printf("%d ",b[i]); }
    printf("end");
    return 0; }