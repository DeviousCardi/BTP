#include <stdio.h>
int main(){
 int num,i=2016;
int sum=0;
scanf("%d",&num);
while(num!=0) {
int val;
val= num;
val=val%10;
sum=sum+val;
val=val/10;
int test=sum;
while(i%test!=0) {
    i++; } }
printf("%d",i);
    return 0; }