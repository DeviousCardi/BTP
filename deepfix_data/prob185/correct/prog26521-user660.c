#include <stdio.h>
int n,s,arr[30];
int SumCheck(int sum,int i) {
    int sum1=0,j;
    for(j=i+1;j<n;j++) {
            sum1=sum+arr[j];
            if(sum1==s)
                return 1;
            else
                SumCheck(sum1,j); }
    if(i==n-1)
        return 0; }
int main() {
    int i,flag=0;
    scanf("%d%d",&n,&s);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
            if(SumCheck(arr[i],i))
                flag=1; }
    if(flag)
        printf("YES");
    else
        printf("NO");
    return 0; }