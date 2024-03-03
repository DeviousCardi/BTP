#include<stdio.h>
long int p=1;
int arr[10^9];
int product(int ar[10^9],int n1) {
    if(n1==1) {
            p=p*ar[0];
            return p; }
    p=ar[n1-1]*product(ar,n1-1); }
int main() {
    long int n;
    scanf("%ld\n",&n);
    for(long int i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    long int pr=product(arr,n);
    printf("%ld",pr);
    return 0; }