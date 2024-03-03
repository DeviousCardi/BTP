#include <stdio.h>
int main(){
    int y,i,a,sum,j;
    scanf("%d",&y);
    sum=0;
    for(i=1;i<=4;i++) {
        a=y%10;
        y=y/10;
        sum=sum+a; }
    j=2016;
    while((j%sum)!=0) {
        j=j+1; }
    printf("%d",j);
    return 0; }