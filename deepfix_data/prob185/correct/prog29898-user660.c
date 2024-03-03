#include <stdio.h>
int n,k,flag,arr[30];
int possible(int sum,int i) {
    int l,sum1;
    if(sum==k) {
        return 1;; }
    else if(i==n-1)
        return 0;
    for(l=i+1;l<n;l++) {
        sum1=sum+arr[l];
        return possible(sum1,l); } }
int main() {
    int i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    flag=possible(0,-1);
    if(flag)
        printf("YES");
    else
        printf("NO");
    return 0; }