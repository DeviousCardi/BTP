#include <stdio.h>
int check(int arr[],int s,int n) {
    int i,t=0;
    for(i=0;i<n-1;i++) {
        if(arr[n-1]+arr[n-2-i]==s) {
           t= 1;
           break; } }
    if(t==1) {
        return 1; }
    else {
        check(arr,s,n-1); } }
int main() {
    int n,s,i;
    scanf("%d %d",&n,&s);
    int amt[n];
    for(i=0;i<n;i++)
    scanf("%d",&amt[i]);
    return 0; }