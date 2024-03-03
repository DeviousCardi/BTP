#include <stdio.h>
int main() {
    int n, a[400],d[200],min=200;
    scanf("%d", &n);
    for(int i=0;i<(2*n);i++)
    scanf("%d", &a[i]);
    for(int i=0;i<n;i++) {
        for(int j=n;j<(2*n);j++) {
            if(a[i]==a[j])
            d[i]=(j-i); } }
    for(int i=0;i<n;i++) {
        if(min>d[i])
        min=d[i]; }
    printf("%d", min);
    return 0; }