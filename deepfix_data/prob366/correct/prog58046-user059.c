#include <stdio.h>
int main() {
    int n,a[400],i,j,d=10000;
    scanf("%d\n",&n);
    for(i=0;i<2*n;i++)
    scanf("%d ",&a[i]);
    for(i=0;i<2*n;i++) {
        for(j=0;j<2*n;j++) {
            if(a[i]==a[j]) {
                if((j-i)<d)
                d=j-i; } } }
    return 0; }