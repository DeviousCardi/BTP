#include <stdio.h>
int main(){
        int n, x, k=0, i, j;
        scanf("%d",&n);
        for(i=1;i<=n;i++) {
            for(j=1;j<=n;j++) {
                if(j!=n)
                scanf("%d ",&x);
                if(j==n)
                scanf("%d\n",&x);
                if((i==j && x==1)||(i!=j && x==0))
                k=k+1;
                else
                break; }
            if(k!=i*n)
            break; }
        if(k==n*n)
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX", n,n);
        if(k!=n*n)
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX", n,n);
    return 0; }