#include <stdio.h>
int main(){
    int n,m;
    int a[99], b[99], c[99];
    for ( int l = 0; l<=99; l++)
        c[l]=-1;
    scanf("%d", &n);
    for( int i = 0; i <= n; i++)
        scanf("%d", &a[i]);
    for( int j = 0; j <= n; j++)
        scanf("%d", &b[j]);
    for ( int k=0; k<=n; k++)
        c[b[k]] = a[k];
    m = 0;
    for( int m = 0; m<=99; m++) {
        if (c[m]==-1)
            break;
        else
            printf("%d", c[m]); }
    printf("end");
    return 0; }