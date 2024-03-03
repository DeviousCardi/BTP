#include <stdio.h>
#include <stdlib.h>
int main() {
     int n,a,b,c,i,sum;
    scanf("%d",&n);
   for(i=1;i<10;i++) {
       a=n%10;
       n=n/10;
       if(n>=1) {
           sum=sum*10+a;
           if(n<10) {
               sum=sum*10+n; } } }
    b=sum;
    printf("%d",&b);
    if(b=n) {
        printf("YES");}
        else{
            printf("NO"); }
	return 0; }