#include <stdio.h>
int main(){
int n,i,j,x;
int m=0;
scanf("%d",&n);
for (j=1; j<=n; j++) {
        for (i=1; i<=n; i++)
        { scanf("%d",&x);
            if  ( !(((i !=j)&&(x==0)) || ((i==j)&&(x==1))))
                { printf("GIVEN %d x %d matrix is NOT an IDENTITY                                MATRIX",n,n);
                 m=m+1;} }
        if (m==1) break; }
    if (m!=1) printf("GIVEN %d x %d matrix is an IDENTITY                                    MATRIX",n,n);
    return 0; }