#include <stdio.h>
int flag=0;
void check_sum(int *a,int n,int sum){
    if(flag=0){
    if(n==0) {printf("No");flag=1; return;}
    else if(sum<0) return;
    else if(sum==0) {printf("Yes");flag=1; return;}
    else{
        check_sum(a+1,n-1,sum-a[0]);
        check_sum(a+1,n-1,sum); } } }
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]); }
    check_sum(arr,n,k);
    return 0; }