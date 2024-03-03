#include <stdio.h>
int main() {
    int n,i,count=0;
    scanf("%d",&n);
    int a[n*n];
    for(i=0;i<n*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        int j=(i*n)+i;
        if(a[j]==1)
        count=count+1;
        else if(i!=j&&a[i]==0)
        count=count+1;
        else
        count=count+0; }
    printf("%d",count);
    if(count==n*n)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }