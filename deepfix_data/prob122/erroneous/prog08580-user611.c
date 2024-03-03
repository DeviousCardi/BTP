#include <stdio.h>
int main() {
int m,a;
scanf("%d",&m);
for (int i=1;i<=m;i++) {
for (int j=1;j<=m;j++) {
scanf("%d",&a);
if ((i==j) && (a!=1)) {
printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",m,m);
return 0 ; }
else ((i!=j) && (a!=0)) {
printf("GIVEN %d x %d matrix is not an IDENTITY MATRIX",m,m);
return 0 ; } } }
printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",m,m);
    return 0; }