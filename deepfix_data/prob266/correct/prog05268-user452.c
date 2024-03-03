#include <stdio.h>
int main(){
    int a;
    int rem;
    int sum=0;
    scanf("%d",&a);
while(a!=0){
    rem=a%10;
    sum=sum+rem;
    a=a/10; }
int k=2016;
while(k%sum!=0){
    k=k+1; }
printf("%d",k);
    return 0; }