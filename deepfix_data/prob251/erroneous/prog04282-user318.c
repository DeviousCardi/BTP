#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    long a[3][1000001];
    for(int i=0;i<1000001;i++)
    a[0][i]=1;
    for(int i=0;i<3;i++)
    a[1][i]=a[0]a[i];
    for(int i=3;i<1000001;i++)
    a[1][i]=a[1][i-3]+a[0][i];
    for(int i=0;i<5;i++)
    a[2][i]=a[1][i];
    for(int i=5;i<1000001;i++)
    a[2][i]=a[2][i-5]+a[1][i];
    printf("%ld",a[2][n]);
    return 0; }