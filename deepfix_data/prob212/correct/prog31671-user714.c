#include <stdio.h>
int main(){
    int year,sum=0,rem,count=0,i;
    scanf("%d",&year);
    while(year>0){
            rem=year%10;
            year=year/10;
            sum=sum+rem; }
    for(i=2016;count==0;i++){
            if(i%sum==0){
                printf("%d",i);
                count=1; } }
    return 0; }