#include <stdio.h>
int main(){
 int num1,num2,n;
 scanf("%d %d %d",&num1,&num2,&n);
 int a[n];
 a[0]=num1;
 a[1]=num2;
 int i=2;
 for(i;i<=n-1;i++) {
     a[i]=a[i-1]+a[i-2]-2; }
 printf("%d",a[n-1]);
    return 0; }