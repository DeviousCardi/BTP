#include <stdio.h>
int main(){
    int n,a;
    scanf("%d\n",&n);
    int i=0,j=0;
    a=i*j;
    for (i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            a=i*j;
            if(i==j)
            a=1;
            else if(i!=j)
            a=0;
            scanf("%d",&a); }
        printf("/n"); }
     printf("GIVEN %dx%d matrix is an IDENTITY MATRIX",n,n);
    return 0; }