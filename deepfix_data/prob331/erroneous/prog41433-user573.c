#include <stdio.h>
int main() {
    int n,i,j,num,flag=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
            for(j=1;j<n;j++) {
                scanf("%d",&num);
                if((i==j && num==1)&&(i!=j && num==0))
                flag++; }
                if(flag>0)
                printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
                else
                printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); } }
    return 0; }