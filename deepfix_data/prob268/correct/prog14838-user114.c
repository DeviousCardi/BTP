#include <stdio.h>
#include <stdlib.h>
long getways(int x, int m) {
    int T=0;
    for(int i=0;i<=x/5;i++)
    for(int j=0;j<=x/3;j++)
    for(int k=0;k<=x;k++) {
        if(5*i+3*j+k==x)
        T++; }
    return T; }
int main() {
    int n,h;
    scanf("%d",&n);
    h = getways(n,3);
    printf("%d",h);
    return 0; }