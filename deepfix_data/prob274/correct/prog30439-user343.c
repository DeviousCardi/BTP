#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    int i;
    int t=3,k=2;
    a[0]=0;
    for (i=1;i<n+1;i++) {
        scanf("%d",&a[i]); }
    i=3;
    while (a[1]!=i) {
        t++;
        k++;
        i=a[i]; }
    printf("%d ",t);
    printf("%d ",k);
    return 0; }