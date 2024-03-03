#include <stdio.h>
int check(int arr[n],int s) {
    int i,t;
    for(i=0;i<n-1;i++) {
        if(arr[n-1]+arr[n-2-i]==s) {
           t= 1;
           break; } }
    if(t==1) {
        return 1; }
    else {
        check(arr[n-1],s); } }
int main() {
    int n,s,i;
    scanf("%d %d",&n,&s);
    int amt[n];
    for(i=0;i<n;i++)
    scanf("%d",&amt[i]);
    return 0; }