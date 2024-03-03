#include <stdio.h>
int main() {
    int y,s=0;
    scanf("%d",&y);
    int a=y;
    while(a>0) {
        s+=a%10;
        a/=10; }
    y+=s-y%s;
    if(y<2016) {
        int a=2016-y;
        if(a%s==0)
            y+=a*s;
        else
            y+=(a/s+1)*s; }
    printf("%d",y); }