#include<stdio.h>
#include<strings.h>
void print_reverse(int ar[],long int n) {
    if(n<0)
    return;
    else {
        printf("%d ",ar[n]);
        print_reverse(ar,n-1); } }
int main() {
    long int n;
    long int i;
    scanf("%ld",&n);
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d",&ar[i]);
        printf("%d ",ar[i]); }
    return 0; }