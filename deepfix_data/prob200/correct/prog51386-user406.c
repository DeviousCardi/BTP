#include <stdio.h>
int arr[100]={0};
int n;
int diff[100];
int min(int a, int b) {
    if(a>b) return b;
    else    return a; }
int max(int a,int b) {
    if(a>b) return a;
    else return b; }
int getMaxLessThan(int upperLimit) {
    int i;
    for(i=0;i<100;i++) {
        diff[i]=upperLimit-arr[i]; }
    int m=0;
    for(i=0;i<100;i++) {
        if(diff[i]>0) {
            m=min(m,diff[i]); } }
    return upperLimit+m; }
int main() {
    int n,mx=0,k;
    int i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d ",&arr[i] );
    for(i=0;i<n;i++) {
        mx=max(mx,arr[i]); }
    for(i=0;i<k;i++) {
        printf("%d\n",mx);
        mx=getMaxLessThan(mx); }
    return 0; }