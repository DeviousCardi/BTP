#include <stdio.h>
int main(){
    int n,a,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&a);
            if(a==1||a==0) {
  if(((a==1)&&(i==j))||((a==0)&&(i!=j)))
c++;} } }
    if(c==(n*n))
                printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
                else
                printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }