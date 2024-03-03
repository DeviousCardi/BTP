#include<stdio.h>
int main() {
    int i,n,a[1000],max=1,first;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int  j,k;
    for(i=0;i<n;i++) {
        k=1;
        for(j=i;j<n;j++) {
            if(a[i]<a[j])
            k++; }
        if(k>max)
        max=k; }
    printf("%d",max);
    return 0; }