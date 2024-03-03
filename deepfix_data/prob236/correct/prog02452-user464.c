#include <stdio.h>
int main(){
     int n,i,a[100],b[100],t;
     scanf("%d",&n);
     for(i=0;i<n;i++) {
         scanf("%d ",&a[i]); }
     for(i=0;i<n;i++) {
        scanf("%d",&b[i]); }
     for(i=0;i<n;i++) {
         for(t=0;t<n;t++)
         if(i==b[t]) printf("%d",a[t]); }
    printf("end");
    return 0; }