#include <stdio.h>
int main() {
    int n,a[500],i=0,j=0,k,l,m;
    char ch;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        ch=getchar(); }
    for(i=0;i<n;i++) {
        k=a[i];l=0;
        for(j=0;j<n;j++) {
            if(a[j]==k)
            l++; }
        if(l!=a[i]) {
            m=0;
            break; }
        else
        m=1; }
    if(m==1)
    printf("Yes");
    else
    printf("No");
    return 0; }