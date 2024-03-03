#include <stdio.h>
int main(){
 int num1,num2,n;
 scanf("%d %d %d",&num1,&num2,&n);
 int i=3;
 int num3;
 for(i;i<=n;i++) {
     num3=num2+num1-2;
     num1=num2;
     num2=num3; }
 printf("%d",num3);
    return 0; }