#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,t;
    scanf("%d\n",&n);
    int a[1002];
    int count=0;
    int b[1002];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int m=0;m<n;m++) {
        t=0;
        for(int j=m;j<n;j++) {
            if(a[m]>a[j]) {
               count=count+1;
               t=t+1; }
                for(int k=m;k<n;k++) {
                  b[k]=t; } } }
        printf("%d\n",count);
        for(int l=0;l<n;l++) {
          printf("%d",b[l]);
          if(l>=0&&l<n-1)
          printf(" "); }
         return 0; }