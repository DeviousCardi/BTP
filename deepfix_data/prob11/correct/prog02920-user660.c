#include <stdio.h>
int n,s,arr[30];
int SumCheck(int sum,int i) {
    int sum1=0,j;
    for(j=i+1;j<n;j++) {
            sum1=sum+arr[j];
            if(sum1==s)
                return 1;
            else
                SumCheck(sum1,i+1);
            sum1=0; }
    if(i==n)
        return 0; }
int main() {
    int i;
    scanf("%d%d",&n,&s);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    if(SumCheck(arr[0],0))
        printf("YES");
    else
        printf("NO");
    return 0; }