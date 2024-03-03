#include <stdio.h>
int check(int arr[],int i,int n) {
    int i;
    if(i>n) {
        return 0; }
    if(arr[i]==sum-arr[i]) {
        return 1; }
    else{
        return check(arr,i+1,n); } }
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n,i++) {
        scanf("%d",&arr[i]); }
    check(arr,0,n);
    if(check) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }