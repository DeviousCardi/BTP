#include <stdio.h>
int main(){
    int n,e;
    scanf("%d",&n);
    int i,j;
    int f=1;
    for(i=0;i<n;i++)
    { for(j=0;j<n;j++)
    { scanf("%d",&e);
    if(i==j) {
    if(e!=1) {
    f=0;
    break;} }
    if(i!=j) {
    if(e!=0) {
    f=0;
    break;} }
    } if(f==0)
    break; }
    if(f==0)
    printf("GIVEN %d %d matrix is NOT an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }