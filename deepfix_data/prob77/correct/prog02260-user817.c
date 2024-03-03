#include <stdio.h>
int main() {
    int a[1000],i,n,max,min;
    scanf("%d\n" ,&n);
    for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
     max=a[0];
     min=a[0];
     for(i=1;i<=n;i++) {
         if(a[i]>max) {
         max=a[i]; }
      if(a[i]<min) {
         min=a[i]; } }
     int x= max;
     max=min;
     min=x;
     printf("%d %d" ,max,min);
    printf("end");
    return 0; }