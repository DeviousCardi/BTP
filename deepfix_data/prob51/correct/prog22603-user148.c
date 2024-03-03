#include <stdio.h>
int main() {
    long int n,k,i,j;
    scanf("%ld %ld",&n,&k);
    long int a[n];
    for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<n;i++) {
        int min=i;
        for(j=i+1;j<n;j++) {
            if(a[j]<a[min])
            min=j; }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp; }
    for(i=0;i<n;i++)
    printf("%ld ",a[i]);
    return 0; }