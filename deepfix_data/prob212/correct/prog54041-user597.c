#include <stdio.h>
int main(){
    int y,r,i,sum,gud;
    scanf("%d",&y);
    sum=0;
    gud=0;
    for(i=1;i<5;i++){
        r=y%10;
        sum=sum+r;
        y=(y-r)/10; }
    y=2016;
    while(gud==0){
        if(y%sum==0){
            gud=y; }
        y=y+1; }
    printf("%d",gud);
    return 0; }