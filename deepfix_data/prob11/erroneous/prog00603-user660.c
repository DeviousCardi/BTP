#include <stdio.h>
int n,k,arr[30]
int SumCheck(int sum,int i) {
    if(i==n-1)
        return 0;
    int sum1=0,j;
    for(j=i+1;j<n;j++) {
            sum1=sum+arr[j];
            if(sum1==s)
                return 1;
            else
                SumCheck(sum1,i+1);
            sum1=0; } }
int main() {
    int i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    if(SumCheck(0,arr[0]))
        printf("YES");
    else
        printf("NO");
    return 0; }