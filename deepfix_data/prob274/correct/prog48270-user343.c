#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    int i,j;
    int t,k;
    a[0]=0;
    for (i=1;i<n+1;i++) {
        scanf("%d",&a[i]); }
    i=1;
    while (a[i]!=i) {
        i=a[i];
        t=t++; }
    return 0; }