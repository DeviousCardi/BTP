#include <stdio.h>
int func(int arr[],int n,int s,int i,int j) {
    if(j==n) {
        i++;
        j=i+1; }
    if(arr[i]+arr[j]==s) {
        return 1; }
    else
        return func(arr,n,s,i,j+1); }
int main() {
    int n,s,k;
    scanf("%d%d",&n,&s);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    k=func(arr,n,s,0,1);
    if(k==1)
        printf("YES");
    else
        printf("NO");
    return 0; }