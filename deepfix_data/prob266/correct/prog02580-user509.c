#include <stdio.h>
int main(){
    int a,b,i,sum=0;
    scanf("%d",&a);
    while(a!=0) {
        b=a%10;
        sum=sum+b;
        a=a/10; }
 for(i=a; ;i++) {
     if(i%sum==0) printf("%d",i);break; }
    return 0; }