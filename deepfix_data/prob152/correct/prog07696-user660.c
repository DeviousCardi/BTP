#include <stdio.h>
int n,k=0,arr[30],flag=0;
void SumCheck(int sum,int i) {
    int j,sum1;
    for(j=i+1;j<n;j++) {
        sum1=sum1+arr[j];
        if(sum1==k-sum1)
            flag=1;
        else
            SumCheck(sum1,i+1); } }
int main() {
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        k=k+arr[i]; }
    SumCheck(0,-1);
    if(flag)
        printf("YES");
    else
        printf("NO");
    return 0; }