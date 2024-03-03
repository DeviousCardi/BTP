#include <stdio.h>
int main() {
    int i,a[200], n,j,min=200, diff ;
    scanf("%d",&n);
    if(n == 0){
        printf("0");
        return 0; }
    for (i=0;i<2*n;i++) scanf("%d",&a[i]);
    for(j=0;j<n;j++) {
        diff=200;
        for (i=j+1;i<2*n;i++) {
            if(a[j]==a[i]) diff = i -  j ; }
        if (min>diff) min=diff; }
    printf("%d",min);
    return 0; }