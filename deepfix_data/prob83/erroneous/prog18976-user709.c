#include <stdio.h>
int arrange(int )
int main() {
    int n,d,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    return 0; }
int arrange(int b[n]) {
    for(j=0;j<n;j++) {
        if((j+d)<=n)
        b[j]=b[j+d];
        else
        b[j]=b[j+d-n]
        printf("%d",b[j]); } }