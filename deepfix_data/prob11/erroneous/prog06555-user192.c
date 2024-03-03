#include <stdio.h>
int fun(int s,int n,int arr[]) {
    if(s==0&&n>=0) {
        return 1; }
    else if((s>0&&n<0)||(s<0)) {
        return 0; }
    else {
        return(fun(s-arr[n-1],n-1,arr)||fun(s,n-1,arr)); } }
int main() {
    int n,s;
    scanf("%d %d",&n,&s)
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    if(fun(s,n,arr)) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }