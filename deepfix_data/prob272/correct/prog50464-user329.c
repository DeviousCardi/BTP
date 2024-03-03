#include <stdio.h>
int main() {
    int a1,a2,n,tn,tx;
    scanf("%d%d%d", &a1, &a2, &n);
    int x=a1, y=a2;
    if(n==1)
        tn=a1;
    else if(n==2)
        tn=a2;
    else {
            for(int i=n; i>=3; i++) {
                   tn = y + x -2;
                   x=y;
                   y=tn; } }
    printf("%d", tn);
    return 0; }