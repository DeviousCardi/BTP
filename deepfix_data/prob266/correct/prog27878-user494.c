#include <stdio.h>
int main() {
    int birth;
    scanf("%d",&birth);
    int sum=0, r;
    while(birth%1000!=0) {
        r=birth%10;
        sum=sum+r;
        birth=birth/10; }
    int y=2016;
    while(y>=2016) {
        if(y%sum==0) {
            printf("%d",y);
            break; }
        ++y; }
    return 0; }