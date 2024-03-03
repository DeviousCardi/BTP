#include <stdio.h>
int right_rot() {
            int i,d,n=0,res;
            res=0;
            int a[n] ;
         scanf("%d",&n);
         printf("%d\n",n);
         for(i=0;i<n;i++) {
              scanf(" %d",&a[i]); {
                  scanf("%d",&d);
                  a[n-i-1]=a[i+d];}
                  printf("%d",res); }
            return res ; }
     int main() {
                   int n ,d,s;
            scanf("%d",&n);
            printf("%d",n);
            s=right_rot(n);
            printf("%d\n",s);
    return 0; }