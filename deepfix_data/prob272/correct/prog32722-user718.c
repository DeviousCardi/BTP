#include <stdio.h>
int main(){
    int n, x, t, y;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&n);
    for ( int i = 3; i<= n; i++) {
        t = x + y - 2;
        x = y;
        y = t; }
    printf("%d", t);
    return 0; }