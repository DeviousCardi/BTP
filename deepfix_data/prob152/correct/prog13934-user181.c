#include <stdio.h>
int check(int arr[],int start,int req_sum,int sum,int end,int index) {
    sum+=arr[index];
    if(sum==req_sum)
        return 1;
        else if(start==end+1)
        return 0;
    else {if(index==end)
    return check(arr,start+1,req_sum,0,end,start+1);
    else return check(arr,start,req_sum,sum,end,index+1); } }
int main() {
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum+=arr[i]; }
    if(sum%2!=0)
    printf("NO");
    else
    {int d=0;
           d=check(arr,0,sum,0,n-1,0);
        if(d==1)
        printf("YES");
        else
        printf("NO"); }
    return 0; }