#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j;
scanf("%d",&n);
int A[n];
for(i=0;i<n;i++) {
    scanf("%d",&A[i]); }
if(n==1) {
            printf("n"); }
else     {
    printf("A[max_repeate()]"); }
	return 0; }
void max_mod(int k)
{   int B[n];
    k=n;
    for(i=0;i<k;i++) {
  count=0; { {
       for(j=0;j<k;j++)
       if(A[i]==A[j]) {
             count=count+1; } }
         B[i]=count; } }
int max_repeat(int m)
{    m=n;
     int max=0; {
        for(i=0;i<m;i++) {
        for(j=0;j<m;j++)
        if(B[i]>=B[j])
       {i=max; }
    return max; }