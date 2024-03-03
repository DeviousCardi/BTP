#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int m=0;
    for(int i=0;i<n;i++) {
        int c=0
        for(int j=0;j<n;j++) {
            if(a[j]==a[i]);
            c++; }
        if(c!=a[i])
        m++; }
    if(m==o)
    printf("Yes");
    else
    printf("No");
    return 0; }