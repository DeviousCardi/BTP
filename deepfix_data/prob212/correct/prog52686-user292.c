#include <stdio.h>
int main(){
    int by,sum,i,year,a;
    scanf("%d",&by);
    year=by;
    sum=0;
    for(i=1;by!=0;i++) {
        sum=sum+by%10;
        by=by/10; }
    a=2016%sum;
    if(a==0) {
        printf("2016"); }
    else {
        printf("%d",2016/sum+sum); }
    return 0; }