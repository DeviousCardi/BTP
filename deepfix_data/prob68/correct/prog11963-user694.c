#include<stdio.h>
int p=1;
int product(int b[],int index,int size) {
    if(index==size)
    return p;
    p=p*b[index];
    return product(b,index+1,size); }
int main() {
    int n;
    int a[10];
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    int f=product(a,0,n);
    printf("%d",f);
    return 0; }