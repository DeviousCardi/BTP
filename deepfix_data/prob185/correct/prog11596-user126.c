#include <stdio.h>
int sumfun(int array[],int start,int end,int sum,int given)
{   int i;
    if(sum==given) return 1;
    if(start>end)return 0;
    sum=sum+array[start];
    for(i=1;i<=end;i++)
    sumfun(array,start+i,end,sum,given); }
int main() {
    int n,sum,value;
    scanf("%d%d",&n,&sum);
    int array[n];
    value=sumfun(array,0,n-1,0,sum);
    if(value==1)
    printf("YES");
    else
    printf("NO");
    return 0; }