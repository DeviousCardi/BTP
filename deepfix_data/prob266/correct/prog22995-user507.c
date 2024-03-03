#include <stdio.h>
int main(){
 int a=0,n,n1=0,i,j,sum=0,count=0;
 scanf ("%d",&n);
 n1=n;
 for (i=1;n!=0;i++) {
 a=n%10;
 n=n/10;
 sum=sum+a; }
for (j=n;count=0;j++) {
    if (j%sum==0) {
       count =1;
       printf ("%d",j); } }
    return 0; }