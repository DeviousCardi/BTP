#include <stdio.h>
int main() {
    int a,n,b=1;
    scanf("%d",&n);
    for(int i=1;i<n;i++) {
        for(int j=1;j<n;j++) {
            scanf("%d ",&a);
            if(!(a==j==i)) {
                printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",&n,&n);
                b=0 } }
        printf("\n"); }
    if(b) {
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",&n,&n); }
    return 0; }