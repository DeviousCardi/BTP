#include <stdio.h>
int d;
int fn(int ar[],int x,int i) {
    if(d==0) {
        printf("YES");
        return 0; }
    (fn(ar,d-ar[i+1],i+1))||(fn(ar,d,i+1));
    return 0; }
int main() {
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&ar[i]); }
    float sum=0;
    for(int i=0;i<n;i++) {
        sum=sum+ar[i]; }
    d=sum/2;
    if(d%2!=0) {
        printf("NOr"); }
    else {
        fn(ar,d,0); }
    return 0; }