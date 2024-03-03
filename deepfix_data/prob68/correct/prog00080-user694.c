#include<stdio.h>
long int p=1;
long int product(long int b[],long int index,long int size) {
    if(index==size)
    return p;
    p=p*b[index];
    return product(b,index+1,size); }
int main() {
    long int n;
    long int a[10];
    scanf("%ld\n",&n);
    for(long int i=0;i<n;i++)
    scanf("%ld ",&a[i]);
    long int f=product(a,0,n);
    printf("%ld",f);
    return 0; }