#include <stdio.h>
int main(){
    int n;
    int c;
    int s1=0,s2=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
          scanf("%d",&c);
          if((i==j) && c==1)
          s1++;
          else if((i!=j) && c==0)
          s2++; } }
    if(s1==n && s2==n*n-n)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX"            ,n,n);
    else
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }