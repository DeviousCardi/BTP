#include <stdio.h>
int main() {
    int i=0,n,sum=0;
    scanf("%d",&n);
    int h[100];
 for(i=0;i<n;i++) {
        scanf("%d",&h[i]); }
   for(i=1;i<n-1;i++) {
       if (h[i]>h[i-1]&&h[i]>h[i+1]) {
           sum=sum+1; } }
   printf("%d",sum);
    return 0; }