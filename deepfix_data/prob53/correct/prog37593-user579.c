#include<stdio.h>
int main() {
    long int n,arr[1000000000],ans;
    scanf("%ld",&n);
    for(int i=0;i<n;i++) {
        scanf("%ld",&arr[i]); }
    for(int i=0;i<n;i++) {
        printf("%ld",arr[i]); }
     return 0; }