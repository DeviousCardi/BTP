#include <stdio.h>
int main(){
int n,i,j,no,count1=0,count2=0;
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{scanf("%d",&no);
if((i==j)&&(no==1))
count1++;
if((i!=j)&&(no==0))
count2++; }
printf("\n"); }
if((count1+count2)==n*n)
printf("GIVEN 3 x 3 matrix is an IDENTITY MATRIX");
else
printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX");
    return 0; }