#include <stdio.h>
int main(){
    int sum=0,byear,lyear=2016;
    scanf("%d",&byear);
    while(byear!=0) {
        sum=sum+byear%10;
        byear=byear/10; }
    while(1){
        if(lyear%sum==0)
        break;
        else
        lyear++; }
    printf("%d",lyear);
    return 0; }