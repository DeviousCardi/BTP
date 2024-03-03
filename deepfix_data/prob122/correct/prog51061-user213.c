#include <stdio.h>
int main() {
int n,i,j,no,count1=0,count2=0;
scanf("%d",&n);
for(i=0;i<n;i++) {
    for(j=0;j<n;j++) {
        scanf("%d",&no);
        if((i==j)&&(no==1))
        count1++;
        if((i!=j)&&(no==0))
        count2++; }
    printf("\n"); }
if((count1+count2)==n*n)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
else
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }