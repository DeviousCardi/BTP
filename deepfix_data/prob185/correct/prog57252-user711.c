#include <stdio.h>
void check(int arr[],int n,int s,int sum){
    if(n==0){
        printf("NO");
        return; }
    if(sum==s){
        printf("YES");
        return; }
    else{
        check(arr,n-1,s,sum+arr[n-1]);
        check(arr,n-1,s,sum); } }
int main() {
    int n,s;
    scanf("%d %d\n",&n,&s);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    check(arr,n,s,0);
    return 0; }