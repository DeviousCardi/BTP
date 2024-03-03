#include <stdio.h>
int n;
int count(int i,int d) {
    if(i+d<=n) {
        i=i+d; }
    else { i=i+d-n;}
    return i; }
int main() {
    int i,j,d,temp;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d",&ar[i]); }
    scanf("%d",&d);
 for(j=1;j<=d;j++) {
    for(i=n-1;i<=1;i--) {
       temp=ar[n-1];
       ar[i]=ar[i-1];
       ar[0]=temp; } }
    return 0; }