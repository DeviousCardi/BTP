#include <stdio.h>
int main() {
    int i,j,n,a,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
            scanf("%d",&a);
            if(i==j&&a==1)
            count=count+1;
            if(i!=j&&a==0)
            count=count+1; }
                printf("Given %d x %d matrix is an IDENTITY MATRIX");
    return 0; }