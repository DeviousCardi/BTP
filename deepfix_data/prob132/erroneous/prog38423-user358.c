#include <stdio.h>
int main() {
    int n,m,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    c=0;
    for(int i=0;i<n;i++) {
        m=a[i];
        for(int j=0j<n;j++)
        if(m==a[j])
        c++; }
    if(c==n)
    printf("YES");
    else
    printf("NO");
    return 0; }