#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int r;
    int i;
    int result;
    for (r=1; r<=n; r++) {
        result=1;
        for (i=1; i<=n; i++) {
            int d;
            result=1;
            scanf("%d", &d);
            if (d!=1 && i==r) {
                printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX\n", n, n);
                result= 0; }
            else if (d!=0 && i!=r) {
                printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX\n", n, n);
                result =0; }
         if (result==0) break; }
        if (result ==0) break; }
    if (r==n+1 && i==n+1) printf("GIVEN %d x %d matrix is an IDENTITY MATRIX\n", n, n);
    return 0; }