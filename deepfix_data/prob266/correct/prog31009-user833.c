#include <stdio.h>
int main(){
    int n;
    int y;
    int a[4];
    scanf("%d", &n);
    a[3] = n%10;
    a[2] = (n/10)%10;
    a[1] = (n/100)%10;
    a[0] = (n/1000);
    if (y>n){ }
    return 0; }