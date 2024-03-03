# include <stdio.h>
# include <stdlib.h>
# include <math.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int t,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
     scanf("%d",&k);
     if(k==0) {
         if(a[0]<a[1])
         printf("Yes\n");
         else
         printf("No\n"); }
     else {
         if(k==(n-1)) {
         if(a[n-1]<a[n-2])
         printf("Yes\n");
         else
         printf("No\n"); }
     else {
         if((a[k-1]>a[k])&&(a[k+1]>a[k]))
         printf("Yes\n");
         else
         printf("No\n"); } } }
    return 0; }