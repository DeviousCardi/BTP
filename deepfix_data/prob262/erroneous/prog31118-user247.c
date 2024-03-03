#include<stdio.h>
#include<strings.h>
long int rev(long int a[],long int n,long int i){
    if(i==n/2+1)
        {return 0;}
    long int temp=0;
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    return rev (a[],n,i+1); }
int main() {
    long int n,i;
    scanf("%ld",&n);
    long int a[n];
    for(i=0;i<n;i++) {
        scanf("%ld",&a[i]); }
    rev (a[],n,0);
    for(i=0;i<n;i++) {
        printf("%ld",a[i]); }
    return 0; }