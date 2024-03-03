#include <stdio.h>
int main() {
    int by,d;
    int sum=0;
    scanf("%d",&by);
    int n=by;
    while(n>0) {
        d=n%10;
        sum=sum+d;
        n=n/10; }
    for(int yr=2016;;yr++) {
        if((yr%sum)==0) {
            printf("%d",yr);
            break; } }
    return 0; }