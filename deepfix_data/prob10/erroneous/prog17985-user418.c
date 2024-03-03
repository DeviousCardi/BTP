#include<stdio.h>
int main() {
    int i,n,a[1000],max=1,first;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int  j,k=0;
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            if(a[i]<a[j])
            k++; }
        if(k>max)
        max=k }
    printf("%d",max);
    return 0; }