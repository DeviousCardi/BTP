#include <stdio.h>
int right_rot() {
            int i,d,n;
         int a[n];
         for(i=0;i<n;i++) {
              scanf(" %d",&a[i]);}
              for(i=0;i<n;i++) {
                  scanf("%d",&d);
                  a[n-i-1]=a[i+d];
                  printf("%d",a[i]); }
            return a[i] ; }
     int main() {
                   int n,i ,s;
                   int a[n];
            scanf("%d",&n);
            printf("%d",n);
            for(i=0;i<n;i++){
            scanf("%d",&a[i]);}
            s=right_rot(n);
            printf("%d",s);
    return 0; }