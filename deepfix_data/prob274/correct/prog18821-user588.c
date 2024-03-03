#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for (i=0 ; i<n ; i++) {
        scanf("%d",&a[i]); }
    i=0;
    int m,c[500];
    int j, k=0;
    m=a[0];
    int h;
    i++;
    int t=i;
    m= a[m];
    printf("%d",m);
    return 0; }