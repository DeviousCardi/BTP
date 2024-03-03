#include <stdio.h>
int main() {
    int n,i,j,num,flag=0,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
            for(j=1;j<=n;j++) {
                scanf("%d",&num);
                if(i==j && num==1)
                flag++;
                else if(i!=j && num==0)
                count++; } }
                if(flag==n && count==(n*n-n))
                printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
                else
                printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }