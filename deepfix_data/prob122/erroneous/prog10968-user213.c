#include <stdio.h>
int main(){
int n,i,j,no,count1=0,count2=0;
 GIVEN n x n matrix is NOT an IDENTITY MATRIX. Here, n is the dimension of the scanf("%d",&n);
for(i=o;i<n;i++)
{for(j=o;j<n;j++)
{scanf("%d",&no)
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