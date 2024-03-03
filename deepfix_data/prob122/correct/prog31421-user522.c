#include <stdio.h>
int main() {
    int n,i,k,inp_,test=0;
    scanf("%d \n",&n);
    for(i=1;i<=n;i++) {
        for(k=1;k<=n;k++) {
            scanf("%d",&inp_);
            if((i==k)&&(inp_!=1))
            test=test+1;
            if((inp_!=0)&&(i!=k))
            test=test+1; }
        printf("\n"); }
    if(test==0)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
     return 0; }