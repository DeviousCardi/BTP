#include <stdio.h>
int main() {
   int i,h,p,m,n,diff;
   diff=0;
   scanf("%d\n%d\n",&h,&p);
   scanf("%d ",&m);
   for(i=1;i<=p-1;i++) {
       scanf("%d ",&n);
       if(n<m) {
           diff =m-n; }
       m=n; }
    if(diff>=h) {
        printf("No"); }
    else {
        printf("Yes"); }
    return 0; }