#include <stdio.h>
int main(){
 int n,a,s=0,cnt=0,i,j;
 scanf("%d",&n);
 printf("%d\n",n);
 for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++) {
            scanf("%d",&a);
            printf("%d ",a);
            if(i==j)
            {if(a==1)
                cnt++; }
            else
            {if(a==0)
                s++; } }
    printf("\n"); }
    if((cnt%n==0)&&(s%(n*n-n)==0)) {
    printf("GIVEN %dx%dis an IDENTITY MATRIX",n,n); }
    else
    printf("GIVEN %dx%dis NOT an IDENTITY MATRIX",n,n);
    return 0; }