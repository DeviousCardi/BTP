#include <stdio.h>
int main(){
 int num,i=2016;
 scanf("%d",&num);
int sum=0;
while(num!=0) {
int val;
val= num;
val=num%10;
sum=sum+val;
val=val/10; }
int test=sum;
while(i/test!=0) {
    i++; }
printf("%d",i);
    return 0; }