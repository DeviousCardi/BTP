#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    int sum,m;
    sum=0;
    scanf("%d",&year);
    while(year!=0) {
        m=year%10;
        sum=sum+m;
        year=year/10; }
    int i=2016;
    while(i<=2116) {
        if(i%sum==0) {
            printf("i");
            break; }
        else
        continue; }
    return 0; }