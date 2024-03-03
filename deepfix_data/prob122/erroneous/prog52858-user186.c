#include <stdio.h>
int main() {
    int n,i,input,x=0;
    scanf("%d",&n);
    for(i=1;i<n,i++) {
        scanf("%d",&input);
        if((((i-2)/n==0)&&(input!=1))||(((i-2)/n!=0)&&(input!=0))) {
          x=x+1; } }
    if(x>0)
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }