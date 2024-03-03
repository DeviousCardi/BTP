#include<stdio.h>
int diff(int t[],int a ){
    if(a==1) return (t[0]);
    else {
        t[1]=t[0]-t[1];
        return diff(t+1,a-1); } }
int main() {
    int n,i;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]); }
    diff(a[n],n);
    return 0; }