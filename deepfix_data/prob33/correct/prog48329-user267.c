#include <stdio.h>
int main() {
int h,p,i;
scanf("%d\n%d",&h,&p);
int sum=0,a,b,k;
for(i=0;i<p;i++) {
    scanf("%d%d",&a,&b);
    if(b<a){
        k=a-b;
        sum=sum+k;
        printf("%d",sum); } }
    return 0; }