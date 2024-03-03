#include <stdio.h>
int d;
void fn(int ar[],int x,int i) {
    if(d==0) {
        printf("YES");
        return; } }
int main() {
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&ar[i]); }
    float sum=0;
    for(int i=0;i<n;i++) {
        sum=sum+ar[i]; }
    d=sum/2.0;
    if(d%2!=0) {
        printf("NO"); }
    else {
        fn(ar,d,0); }
    return 0; }