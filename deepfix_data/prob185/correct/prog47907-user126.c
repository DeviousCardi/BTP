#include <stdio.h>
int sumfun(int array[],int start,int end,int sum) {
    if(start>end)return sum;
    sum=sum+array[start];
    sumfun(array,start+1,end,sum); }
int main() {
    int n,sum,value;
    scanf("%d%d",&n,&sum);
    int array[n];
    value=sumfun(array,0,n-1,0);
    if(value=sum)
    printf("YES");
    else
    printf("NO");
    return 0; }