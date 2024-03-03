#include <stdio.h>
int check(int array[30],int index,int size,int sum1,int sum2,int k) {
    if(sum1==k || sum2==k)
    return 1;
    if(index==size-1)
    return sum1==k||sum2==k;
    else
    return check(array,index+1,size,sum1+array[index],sum2,k)||
           check(array,index+1,size,sum1,sum2+array[index],k); }
int main() {
    int n,k,i,array[30],l=0,sum=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
      scanf("%d",&array[i]);
    l=check(array,0,n,0,0,k);
    if(l==1)
    printf("YES");
    else
    printf("NO");
    return 0; }