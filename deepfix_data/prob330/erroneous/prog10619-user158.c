#include <stdio.h>
int main() {
    int i,n,sum=0,count=0;
    scanf("%d",&n);
    int h[100];
    for(i=0;i<100;i++) {
        scanf("%d",&h[i]);
        count=count+1; }
   for(i=1;i<(count-1);i++) {
       if (h[i]>h[i-1]&&h[i]>h[i+1]) {
           sum=sum+1 } }
   printf("%d",&sum);
    return 0; }