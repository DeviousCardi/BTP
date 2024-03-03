#include <stdio.h>
int n,k=0,flag=0,arr[30];
void possible(int sum,int i) {
    int l,sum1;
    if(2*sum==k) {
        flag=1;; }
    else if(i==n-1)
        return;
    for(l=i+1;l<n;l++) {
        sum1=sum+arr[l];
        possible(sum1,l); } }
int main() {
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        k=k+arr[i]; }
    possible(0,-1);
    if(flag)
        printf("YES");
    else
        printf("NO");
    return 0; }