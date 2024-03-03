#include <stdio.h>
int main(){
    int c,a,b,i,sum=0;
    scanf("%d",&a);
    c=a;
    while(a!=0) {
        b=a%10;
        sum=sum+b;
        a=a/10; }
 for(i=c; ;i++) {
     if(i%sum==0){ printf("%d",i);break;} }
    return 0; }