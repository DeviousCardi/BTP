#include <stdio.h>
int main(){
    int a, b, c, d;
    scanf("%1d %1d %1d %1d", &a,&b,&c,&d);
    int num= a+b+c+d;
    int birthYear= 1000*a+100*b+10*c+d;
    for (int i= birthYear; i<=10000; i++ ) {
        if (i%num==0) {
            printf("%d", i);
            break; } }
    return 0; }