#include <stdio.h>
int main() {
    int n,ly,sy,a,g;
    sy=0;
    scanf("%d",&n);
    while(n/10!=0){
        a=n%10;
        g=n/10;
        sy=sy+a;
        n=g;
    }printf("%d",sy);
    return 0; }