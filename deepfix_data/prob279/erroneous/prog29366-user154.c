#include <stdio.h>
int main()
{   int n,i,j,l;
    scanf("%d\n",&n);
    int a[n],c[n+1];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<n+1;i++) {
       c[i]=0; }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[j]==a[i])
            t++; } }
    for(j=0;j<n;j++) {
        if (c[j]==2) {
            printf("%d\n",j+1);
            for(l=0;l<n+1;l++) {
                if(c[l]==0) {
                printf("%d",l+1);
                break; } } } }
    return 0; }