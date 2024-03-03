#include <stdio.h>
int main(){
 int dob,sum=0;
 scanf("%d",&dob);
 int j=dob,i;
 for (i=0;i<=j;i++) {
     sum=sum+j%10;
     j=j/10; }
 for (i=2016;i<=2052;i++) {
     if (i%sum==0)
       {printf("%d",i);
       break;} }
    return 0; }