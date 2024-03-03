#include <stdio.h>
int main(){
    int a1, a2, n, x, t, y;
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&n);
    a1 = x;
    a2 = y;
    for ( int i = 3; i<= n; i++) {
        t = x + y - 2;
        printf("%d \n",t);
        x = y;
        y = t; }
    printf("%d", t);
    return 0; }