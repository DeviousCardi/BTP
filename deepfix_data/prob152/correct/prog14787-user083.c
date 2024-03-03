#include <stdio.h>
int check(int n,int array[],int sum1,int sum2) {
    if((sum1<=0)||(n<=0))
    return 0;
    if(sum1==sum2)
    return 1;
    else
    return check(n-1,array,sum1-array[n-1],sum2+array[n-1])||check(n-1,array,sum1,sum2); }
int main() {
   int i,n,sum1=0;
   scanf("%d",&n);
   int array[n];
   printf("NO");
    return 0; }