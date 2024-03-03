#include <stdio.h>
int main() {
    int i,n,j,d,temp;
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
 for(i=0;i<n;i++) {
     printf("%d ",ar[i]); }
    return 0; }