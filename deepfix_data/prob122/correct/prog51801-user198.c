#include <stdio.h>
int main(){
 int n,a,s=0,cnt=0,i,j;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++) {
            scanf("%d",&a);
            if(i==j)
            {if(a==1)
                cnt++; }
            else
            {if(a==0)
                s++; } }
    printf("\n"); }
    if(cnt!=0) {
    if((cnt%n==0)&&(s%(n*n-n)==0)) {
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    else
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    if(cnt==0)
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }