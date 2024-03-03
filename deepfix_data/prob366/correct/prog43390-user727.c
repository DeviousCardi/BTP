#include <stdio.h>
int main() {
    int n,a[201],i,j,min;
    scanf("%d",&n);
    min=2*n;
    for(i=0;i<2*n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<2*n;i++) {
        for(j=i+1;j<2*n;j++) {
            if(a[i]==a[j])
            break; }
        if(min>j-i)
        min=j-i; }
    printf("%d",min);
    return 0; }