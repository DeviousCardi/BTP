#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int a[1002];
    int count=0;
    int b[1002];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            int t=0;
            if(a[i]>a[j])
            count=count+1;
            t=count;
            for(int k=i;k<n;k++) {
                b[k]=t; } } }
        printf("%d\n",count);
        for(int l=0;l<n;l++) {
          printf("%d",b[l]);
          if(l>0&&l<n-1)
          printf(" "); }
         return 0; }