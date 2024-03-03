#include <stdio.h>
int main() {
    int n,i,l,k=0,flag=0,t;
    scanf ("%d",&n);
    int r[n];
    int j[n];
    int a[2*n];
    int b[2*n];
    for (i=0;i<n;i++)
        scanf ("%d",&r[i]);
    for (i=0;i<n;i++)
        j[i]=i+1;
    for (i=0;i<2*n;i=i+2) {
        a[i]=j[k];
        a[i+1]=r[k];
        k++; }
    b[0]=a[0];
    for (i=1,l=1;i<2*n;) {
        if (a[l]==a[l-1])
            l++;
        else {
            b[i]=a[l];
            l++;
            i++; } }
    t=0;
    for (i=1;i<2*n;i++) {
        for (t=0;t<i;t++) {
            flag=0;
            if (b[i]==b[t]) {
                flag=1;
                printf ("%d %d",i,i-t);
                break; } }
        if (flag==1)
        break; }
    return 0; }