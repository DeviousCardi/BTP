#include <stdio.h>
int main() {
    int n,i,j,z,a[400],large;
    scanf("%d",&n);
    for(i=0;i<(2*n);i++)
        scanf("%d",&a[i]);
    for(i=0;i<(2*n);i++) {
            large=2*n;
            for(j=i+1;j<(2*n);j++) {
                    if(a[i]==a[j])
                             z=j-i;
                    if(z<large) {
                            large=z; } } }
    printf("%d",z);
    return 0; }