#include<stdio.h>
#define max 1000000000
long int p=1;
int product(int a[],int index,int size) {
    if(index==size)
    return p;
    p=p*a[index];
    return product(a,index+1,size); }
int main() {
    long int n;
    long int a[max];
    scanf("%d\n",&n);
    for(int i=0;i<max;i++)
    scanf("%d",&a[i]);
    long int f=product(a,0,n);
    printf("%d",f);
    return 0; }