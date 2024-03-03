#include <stdio.h>
int main() {
    int m,i=1,j=1,q,p;
    scanf("%d",&m);
    for(i=1;i<m;i++) {
       for(j=1;j<m;j++) {
           if(i==j) {
               scanf("%d",&q); }
           else if(i!=j) {
               scanf("%d",&p); } } }
       if(q==1&&p==0)
       { printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",m,m);}
    return 0; }