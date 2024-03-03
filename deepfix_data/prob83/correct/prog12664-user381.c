#include <stdio.h>
int right_rot() {
            int i,d,n,res;
         scanf("%d",&n);
         printf("%d\n",n);
         int a[n];
         for(i=0;i<n;i++) {
              scanf(" %d",&a[i]);}
              for(i=0;i<n;i++) {
                  scanf("%d",&d);
                  a[n-i-1]=a[i+d];
                  printf("%d\n",res); }
            return res ; }
     int main() {
                   int n ,s;
            scanf("%d",&n);
            printf("%d",n);
            s=right_rot(n);
            printf("%d\n",s);
    return 0; }