#include <stdio.h>
int main() {
    int a[100],b[100]={0},i=0,j,n,l,c=0;
    char k;
    scanf("%d\n",&n);
    while(i<n) {
        scanf("%c",&k);
        if(k!=',') {
            k=k-'0';
            a[i]=k;
            i++; } }
    for(i=0;i<n;i++) {
        l=a[i];
        for(j=i+1;j<n;j++) {
            if(a[i]==a[j])
            b[l]=b[l]+1; }
        l++; }
    for(i=0;i<n;i++) {
        if(b[i]!=0 && b[i]==i)
        c=c+b[i]; }
    for(i=0;i<n;i++)
    printf("%d",b[i]);
    if(c==n)
    printf("Yes");
    else
    printf("No");
    return 0; }