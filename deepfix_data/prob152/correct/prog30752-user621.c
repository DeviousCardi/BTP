#include <stdio.h>
int d,n;
int fn(int ar[],int x,int i) {
    if(x==0) {
        printf("YES");
        return 0; }
    if(x<0) {
        return 0; }
    int k=x-ar[i+1];
    i=i+1;
    return (fn(ar,k,i));
    return (fn(ar,x,i)); }
int main() {
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&ar[i]); }
    int sum=0;
    for(int i=0;i<n;i++) {
        sum=sum+ar[i]; }
    d=sum/2;
    if(sum%2!=0) {
        printf("NO"); }
    else {
        fn(ar,d,-1); }
    return 0; }