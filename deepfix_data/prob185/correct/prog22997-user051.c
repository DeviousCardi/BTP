#include <stdio.h>
int value_chk(int size,int s,int arr[],int sum) {
    int i;
    if(sum<s)
        return 0;
    if(sum==s)
        return 1;
    for(i=0;i<size;i++) {
        value_chk(size-1,s,arr+1,sum-arr[0]); } }
int main() {
    int n,s,arr[30],i,sum=0;
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum=sum+arr[i]; }
    if(value_chk(n,s,arr,sum))
        printf("YES");
    else
        printf("NO");
    return 0; }