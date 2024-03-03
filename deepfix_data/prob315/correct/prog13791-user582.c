#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],b[n],c,d=0,i,j;
    for (i=0;i<n;i++) {
    scanf("%d",&a[i]);
    b[i]=0; }
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]>a[j]) {
                c++;
                d++; } }
        b[i]=c;
        c=0; }
    printf("%d\n",d);
    for (i=0;i<n;i++)
    scanf("%d",b[i]);
    return 0; }