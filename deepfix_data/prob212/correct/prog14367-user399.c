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
        if((2016-y)%s==0)
            y=2016;
        else
            y+=((y-2016)/s+1)*s; }
    printf("%d",y); }