#include<stdio.h>
int main() {
    int n,t;
    scanf("%d",&n);
    int i,a[n+1],j,s=1,max=0;
    for(i=0;i<n;i++) {
            scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
            for(j=i+1;j<n;j++) {
                    if(a[j]>a[i])
                    { s++;
                        t=j;
                    j=i;
                    i=t;
                    s++; }
                    else
                    continue; } }
    return 0; }