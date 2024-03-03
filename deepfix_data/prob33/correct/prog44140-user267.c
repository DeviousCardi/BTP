#include <stdio.h>
int main() {
int h,p,i;
scanf("%d\n%d",&h,&p);
int sum=0,a,b,k;
scanf("%d",&a);
for(i=0;i<p;i++) {
    scanf("%d",&b);
    if(b<a){
        k=a-b;
        sum=sum+k;
        printf("%d\n",sum); }
    a=b; }
    return 0; }