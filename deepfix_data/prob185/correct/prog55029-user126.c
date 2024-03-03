#include <stdio.h>
int sumfun(int array[],int start,int end,int sum)
{   if(start>end)return 0;
    if(array[start]==sum)return 1;
    if(sum==0)
    return 1;
    sumfun(array,start+1,end,sum-array[start]);
    sumfun(array,start+1,end,sum);
    return 0; }
int main() {
    int n,sum,i,value;
    scanf("%d%d",&n,&sum);
    int array[n];
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    value=sumfun(array,0,n-1,sum);
    if(value==1)
    printf("YES");
    else
    printf("NO");
    return 0; }