#include <stdio.h>
int main() {
    int m,i,j,q,p;
    scanf("%d",&m);
    for(i=0;i<m;i++) {
       for(j=0;j<m;j++) {
           if(i==j) {
               scanf("%d",&q); }
           else if(i!=j) {
               scanf("%d",&p); } } }
       if(q==1&&p==0)
       { printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",m,m);}
    return 0; }