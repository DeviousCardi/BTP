#include <stdio.h>
int main(){
    int n,sum=0,zero=0,h;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {   scanf("%d",&h);
        if(i==j)
        sum=sum+h;
        else
        zero=zero+h; }
if(zero==0&&sum==n)
printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
else
printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }