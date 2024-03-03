#include <stdio.h>
int ksum(int s,int n,int arr[t]){
    int sum=0;
    sum=arr[n-1]+arr[n-2];
    if(sum==s)
    return 1;
    else
    return ksum(s,n-1,arr);
    return 0; }
int main() {
    int n,s,i,t;
    scanf("%d%d\n",&n,&s);
    t=n;
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    if(ksum(s,n,arr)==1)
    printf("YES");
    else
    printf("NO");
    return 0; }