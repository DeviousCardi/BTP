#include <stdio.h>
int main() {
    int birthyear,luckyyear,i,d,sum=0;
    scanf("%d",&birthyear);
for(i=birthyear;i!=0;i=i/10) {
    d=i%10;
    sum=sum+d; }
    if(luckyyear>=2016&&luckyyear/sum==0&&luckyyear<=3000)
       printf("%d",luckyyear);
    return 0; }