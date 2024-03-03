#include<stdio.h>
int prdct(int a[],int size){
    if(size==0) return a[0];
    return a[size]*prdct(a,(size-1)); }
int main() {
    int i,n;
    scanf("%d\n",&n);
    int num[n];
    for(i=0;i<n;i++){
        scanf("%d ",&num[i]); }
        printf("%d ",num[i]); }
    printf("%d",prdct(num, n));
    return 0; }