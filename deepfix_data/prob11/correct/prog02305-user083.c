#include <stdio.h>
int ksum(int s,int n,int arr[n]){
    int sum=0;
    sum=arr[n-1]+arr[n-2];
    if(sum==s)
    return 1;
    else
    return ksum(s,n-1,arr);
    return 0; }
int main() {
    int n,s,i;
    scanf("%d%d\n",&n,&s);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    if(ksum(s,n,arr)==1)
    printf("YES");
    else
    printf("NO");
    return 0; }