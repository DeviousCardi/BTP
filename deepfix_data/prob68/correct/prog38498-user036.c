#include<stdio.h>
int finding_product(int arr[],int size,int product1){
    if(size==0)return product1;
    product1=product1*arr[size-1];
    return finding_product(arr,size-1,product1); }
int main() {
    int N;
    long s;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++)
        scanf("%d",&a[i]);
    int product=finding_product(a,N,1);
    printf("%d",product);
    return 0; }