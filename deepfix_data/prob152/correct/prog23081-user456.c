#include <stdio.h>
int i=0,j;
int esum(int n,int i,int a[n]) {
    int k=0,l=0;
    if(i==n-1) return 0;
    for(j=0;j<=i;j++) {
        k+=a[j]; }
    for(j=i+1;j<n;j++) {
        l+=a[j]; }
    if(k==l) return 1;
    else return esum(n,i+1,a); }
int main() {
    int n,x=0,q;
    scanf("%d\n",&n);
    int a[n];
    for(q=0;q<n;q++)
    scanf("%d ",&a[q]);
    x=esum(n,i,a);
    if(x==1)
    printf("YES");
    else if(x==0) printf("NO");
    return 0; }