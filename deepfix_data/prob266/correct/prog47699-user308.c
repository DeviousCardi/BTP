#include <stdio.h>
int main(){
 int num,i;
 scanf("%d",&num);
int sum=0;
while(num!=0) {
int val;
val= num;
val=num%10;
sum=sum+val;
val=val/10; }
if(i/sum==0) {
    printf("%d",i); }
    return 0; }