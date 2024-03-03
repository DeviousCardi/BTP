#include <stdio.h>
#define MAX 10000000
int main() {
    long int n,k,a[MAX],i;
    int temp=0;
    scanf("%ld",&n);
    scanf("%ld",&k);
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    for(i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i]<a[j]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp; } }
    }for(i=0;i<n;i++)
    printf("%ld",a[i]);
    return 0; }