#include <stdio.h>
int main() {
    int y,s=0;
    scanf("%d",&y);
    while(a>0) {
        s+=a%10;
        a/=10; }
    if(y%s>=s/2)
        y+=s-y%s;
    else
        y-=y%s;
    printf("%d",y); }