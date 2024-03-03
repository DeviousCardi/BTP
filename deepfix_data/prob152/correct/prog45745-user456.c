#include <stdio.h>
int i=0,k=0,j,l=0;
int esum(int n,int i,int a[n]) {
    if(i==n-1) return 0;
    for(j=0;j<=i;j++) {
        k+=a[j]; }
    for(j=i+1;j<n;j++) {
        l+=a[j]; }
    if(k==l) return 1;
    else return esum(n,i+1,a); }
int main() {
    int n,x=0;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    x=esum(n,i,a[n]);
    if(x==1)
    printf("YES");
    else printf("NO");
    return 0; }