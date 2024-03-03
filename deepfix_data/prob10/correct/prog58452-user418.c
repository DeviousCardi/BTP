#include<stdio.h>
int main() {
    int i,n,a[1000],max=1,first;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int  j,k,z;
    for(i=0;i<n;i++) {
        k=1;
         z=i;
        for(j=i;j<n;j++) {
            if(a[z]<a[j]) {
                k++;
                z=j; } }
        if(k>max)
        max=k; }
    printf("%d",max);
    return 0; }