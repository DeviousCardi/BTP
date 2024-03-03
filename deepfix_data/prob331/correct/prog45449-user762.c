#include <stdio.h>
int main(){
    int n,i,j,x,s=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
        {   s=-1;
            scanf("%d",&x);
            if(j==i) {
                if(x!=1) {
                    s++;break; } }
            else if(i!=j) {
                if(x!=0); {
                    s++;break; } } }
        if(s==0)break; }
    if(s==0) {
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,s); }
    else if(s==-1) {
      printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,s); }
    return 0; }