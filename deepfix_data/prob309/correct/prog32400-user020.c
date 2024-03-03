#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    char ch;
    for(int i=0;i<n;i++) {
        for(int j=2*i;j<2*n;j++) {
            scanf("%d",&a[j]);
            scanf("%c",&ch); } }
    int m=0;
    for(int i=0;i<n;i++) {
        int c=0;
        for(int j=0;j<n;j++) {
            if(a[j]==a[i])
            c++; }
        if(c!=a[i])
        m++; }
    if(m==0)
    printf("Yes");
    else
    printf("No");
    return 0; }