#include <stdio.h>
int sum(int end ,int s,int arr[],int start,int mark ) {
    int sum2=0,i;
    if(start>mark)
    return 0;
    for(i=start;i<end;i++) {
        sum2=sum2+arr[i]; }
    if(sum2==s) {
        printf("YES");
        return 1; }
    else {
        if(end==start) {
            return sum(end,s,arr,start+1,mark); }
        return sum(end-1,s,arr,start,mark); } }
int main() {
    int n,s,i;
    scanf("%d%d",&n,&s);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    sum(n-1,s,arr,0,n-1);
    return 0; }