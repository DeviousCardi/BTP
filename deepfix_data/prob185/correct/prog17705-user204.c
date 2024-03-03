#include <stdio.h>
int check(int arr[],int start,int end,int s);
int main() {
    int n,s,i,c;
    scanf("%d %d",&n,&s);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    c= check(arr,0,n-1,s);
    if(c) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }
int check(int arr[],int start,int end,int s) {
    if(start>end) {
        return 0; }
    if(arr[start]==s) {
        return 1; }
    else {
        return check(arr,start+1,end,s); } }