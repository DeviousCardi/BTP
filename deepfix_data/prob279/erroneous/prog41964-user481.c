#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[j]==i+1)
            b[i]=1;
            else
            b[i]=0; } }
    return 0; }