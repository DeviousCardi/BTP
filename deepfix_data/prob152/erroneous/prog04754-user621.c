#include <stdio.h>
int d,n;scanf("%d",&n);
    int ar[n];
int fn(int ar[],int x,int i) {
    if(x==0) {
        printf("YES");
        return 0; }
    if(x<0) {
        return 0; }
    (fn(ar,x-ar[i+1],i+1))||(fn(ar,x,i+1)); }
int main() {
    for(int i=0;i<n;i++) {
        scanf("%d",&ar[i]);http: }
    int sum=0;
    for(int i=0;i<n;i++) {
        sum=sum+ar[i]; }
    d=sum/2;
    printf("%d",d);
    if(sum%2!=0) {
        printf("NO"); }
    else {
        fn(ar,d,-1); }
    return 0; }