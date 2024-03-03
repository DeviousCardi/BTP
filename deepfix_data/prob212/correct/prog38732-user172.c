#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    int count,digit,sum;
    sum=0;
    for(count=year;count!=0;count=count/10){
        digit=count%10;
        sum=sum+digit; }
    int i;
    for(i=2016;;i++){
        if(i%sum==0){
            printf("%d",i);
            break; } }
    return 0; }