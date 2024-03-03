#include <stdio.h>
int n,s,arr[30],flag=0;
void SumCheck(int sum,int i) {
    int sum1=0,j;
    for(j=i+1;j<n;j++) {
            sum1=sum+arr[j];
            if(sum1==s) {
                flag=1;
                return; }
            else
                SumCheck(sum1,i+1); }
    if(i==n-1)
        return; }
int main() {
    int i;
    scanf("%d%d",&n,&s);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
            SumCheck(arr[i],i); }
    if(flag)
        printf("YES");
    else
        printf("NO");
    return 0; }