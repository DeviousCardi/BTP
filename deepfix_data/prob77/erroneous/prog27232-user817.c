#include <stdio.h>
int main() {
    int a[1000],i,n,max,min,t1,t2;
    scanf("%d\n" ,&n);
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++) {
    scanf("%d",&a[i]);
    if(i==0) {
    min=max=a[i]; }
         if(a[i]>max) {
         max=a[i]; }
      if(a[i]<min) {
         min=a[i]; }
     for(i=0;i<n;i++) {
         if(min==a[i]) {
         flag1=i;
         break; } }
      for(i=0;i<n;i++) {
          if(max==a[i]) {
              flag2=i;
              break; } }
      t1=a[flag1];
      t2=a[flag2];
      a[flag1]=t2;
      a[flag2]=t1;
      for(i=0;i<n;i++) {
          printf("%d" ,a[i]); }
      getch(); }
    printf("end");
    return 0; }