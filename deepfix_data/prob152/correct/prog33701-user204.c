#include <stdio.h>
int check(int arr[],int i,int n,int ts,int sum) {
    if(i>=n) {
        return 0; }
    ts=ts+arr[i];
    if(ts==sum/2) {
        return 1; }
    if(ts>sum/2) {
        ts==ts-arr[i]; }
    else{
        return check(arr,i+1,n,ts,sum); } }
int main() {
    int n,i,sum=0,c;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum=sum+arr[i]; }
    c=check(arr,0,n,0,sum);
    if(c==1) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }