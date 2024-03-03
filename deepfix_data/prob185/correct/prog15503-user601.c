#include <stdio.h>
int check(int arr[],int s,int n) {
    if(n<2)
    return 0;
    int i,t=0;
    for(i=0;i<n-1;i++) {
        if(arr[n-1]+arr[n-2-i]==s) {
           t= 1;
           break; } }
    if(t==1) {
        return 1; }
    else {
       t= check(arr,s,n-1); }
    return t; }
int main() {
    int n,s,i,k;
    scanf("%d %d",&n,&s);
    int amt[n];
    for(i=0;i<n;i++)
    scanf("%d",&amt[i]);
    k= check(amt,s,n);
    if(k==1)
    printf("YES");
    else
    printf("NO");
    return 0; }