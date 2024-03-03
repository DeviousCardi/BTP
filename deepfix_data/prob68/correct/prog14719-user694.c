#include<stdio.h>
#define max 1000000000
long int p=1;
long int product(int b[],int index,int size) {
    if(index==size)
    return p;
    p=p*b[index];
    return product(b,index+1,size); }
int main() {
    long int n;
    long int a[max];
    scanf("%ld\n",&n);
    for(int i=0;i<n;i++)
    scanf("%ld ",&a[i]);
    long int f=product(a,0,n);
    printf("%ld",f);
    return 0; }