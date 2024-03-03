#include<stdio.h>
int main() {
    int n,d,i,j,p,flag=1;
    scanf("%d",&n);
    d=n*n;
    int mat[d];
    for(i=0;i<d;i++)
        scanf("%d",&mat[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(flag==0)
                break;
            p=n*i+j;
            if(i==j) {
                if(mat[p]==1)
                    flag=1;
                else
                    flag=0; }
            else if(i!=j) {
                if(mat[p]==0)
                    flag=1;
                else
                    flag=0; } }
        if(flag==0)
            break; }
    if(flag==0)
        printf("GIVEN %d X %d matrix is NOT an IDENTITY MATRIX",n,n);
    else
        printf("GIVEN %d X %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }