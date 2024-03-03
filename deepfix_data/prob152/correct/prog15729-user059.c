#include <stdio.h>
int check(int array[30],int index,int size,int sum1,int sum2) {
    if(index==size-1)
    return sum1==sum2;
    else
    return check(array,index+1,size,sum1+array[index],sum2)||
           check(array,index+1,size,sum1,sum2+array[index]); }
int main() {
    int n,i,array[30],l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&array[i]);
    l=check(array,0,n,0,0);
    if(l==1)
    printf("YES");
    else
    printf("NO");
    return 0; }