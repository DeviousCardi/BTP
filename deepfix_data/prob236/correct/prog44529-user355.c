#include <stdio.h>
int main() {
    int n,i,j,k,a[100],b[100],m;
    scanf("%i",&n);
    for(i=0;i<n;++i)
        scanf("%i",&a[i]);
    for(j=0;j<n;++j) {
            scanf("%i",&m);
            b[m]=a[j]; }
    for(k=0;k<n;++k)
        printf("%i ",b[k]);
    printf("end");
    return 0; }