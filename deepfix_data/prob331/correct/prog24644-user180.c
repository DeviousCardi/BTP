#include <stdio.h>
int main(){
 int n,c;
 scanf("%d",&n);
 for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
         int a;
         scanf("%d",&a);
         if(i==j&&a==1)
            c=1;
        if(i!=j&&a!=0)
            c=0; }
     scanf("\n"); }
    if(c==n)
        printf("GIVEN %d*%d matrix is an IDENTITY MATRIX.",n,n);
    else
        printf("GIVEN %d*%d matrix is NOT an IDENTITY MATRIX.",n,n);
    return 0; }