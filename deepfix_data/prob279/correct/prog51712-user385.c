#include <stdio.h>
int main() {
    int n,i,j,l=0;
    scanf("%d\n",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {    l=0;
        for(j=0;j<n;j++) {
            if(a[i]==a[j])
             l++; } {
             if(l>1) {
            printf("%d\n",a[i]); }
           if(l==0) {
               printf("%d",a[i]); } } }
    return 0; }