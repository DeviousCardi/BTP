#include <stdio.h>
int arrange(int b[1000]);
int main() {
    int n,d,i;
    scanf("%d",&n);
    int a[1000];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    arrange(a[1000]);
    return 0; }
int arrange(int b[1000]) {
    int d,j,n;
    for(j=0;j<n;j++) {
        if((j+d)<=n)
        b[j]=b[j+d];
        else
        b[j]=b[j+d-n];
        printf("%d",b[j]); } }