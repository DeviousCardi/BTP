#include <stdio.h>
int main(){
   int byear;
   scanf("%d",&byear);
   int sumofdigits;
   int num1=byear;
   int sum=0;
   while(num1!=0) {
      int util=num1%10;
      sum=sum+util;
      num1=num1/10; }
   int j=2016;
   while(j%sum!=0) {
       j++; }
   printf("%d",j);
    return 0; }