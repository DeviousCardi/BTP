#include <stdio.h>
int main(){
    int n,k,,i,j,f=1;
    scanf("%d",&n);
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                scanf("%d",&k);
                if((i==j&&k!=1)||(i!=j&&k!=0)) {
                    f=0;
                    break; } } }
        if(f==0)
        printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX");
        else
        printf("GIVEN n x n matrix is an IDENTITY MATRIX");
    return 0; }