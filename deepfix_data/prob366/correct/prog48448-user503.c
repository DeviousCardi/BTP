#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d\n",&n);
    int a[n],min=n;
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]==a[j]) {
                if (min<(j-i))
                    min=j-i; } } }
    printf("%d",min);
    return 0; }