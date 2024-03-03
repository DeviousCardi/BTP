#include <stdio.h>
int main(){
    int y,r,i,sum,gud;
    scanf("%d",&y);
    sum=0;
    for(i=1;i<5;i++){
        r=y%10;
        sum=sum+r;
        y=(y-r)/10; }
    y=2016;
    while(){
        if(y%sum==0){
            gud=y;
            break; }
        y=y+1; }
    return 0; }