#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a;
    int i;
    for(i=1;i<=n*n;i=i+1) {
            scanf("%d",&a);
            if (i%n==1||a!=1)
            {printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
            break; }
            else if (i%n!=1||a!=0)
            {printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
            break; } }
         printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }