#include <stdio.h>
int check(int n,int array[],int sum1,int sum2) {
    if((sum1<=0)||(n<=0))
    return 0;
    if(sum1==sum2)
    return 1;
    else
    return check(n-1,array,sum1-array[n-1],sum2+array[n-1])||check(n-1,array,sum1,sum2) }
int main() {
   int i,j,n,sum1=0;
   scanf("%d",&n);
   int array[n];
   for(i=0;i<n;i++){
       scanf("%d",&array[i]); }
   for(i=0;i<n;i++){
       sum1=sum1+array[i]; }
   if(check(n,array,sum1,0)==1)
   printf("YES");
   else
   printf("NO");
    return 0; }