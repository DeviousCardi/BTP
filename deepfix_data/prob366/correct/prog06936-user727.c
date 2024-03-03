#include <stdio.h>
int main() {
    int n,a[201],i,j,min,diff;
    scanf("%d",&n);
    min=1000;
    for(i=0;i<2*n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<2*n;i++) {
        for(j=i+1;j<2*n;j++) {
            if(a[i]==a[j])
            diff=j-i; }
        if(min>diff)
        min=diff; }
    printf("%d",min);
    return 0; }