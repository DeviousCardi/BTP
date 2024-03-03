#include <stdio.h>
int d,n;
int fn(int ar[],int x,int i) {
    if(x==0) {
        printf("YES");
        return 0; }
    if(x<0) {
        return 0; } }
int main() {
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&ar[i]); }
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