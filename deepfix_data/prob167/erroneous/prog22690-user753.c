#include<stdio.h>
int sum(int ar[],int n) {
    if(n<0)
    return 0;
    else
    {printf("%d\n",array[size]+sum(array,size-1));
    return ar[n-1]+sum(ar,n-2); } }
int main() {
    int i,n;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<=n-1;i++) {
        scanf("%d",&ar[i]); }
    int s=sum(ar,n);
    printf("%d",s);
    return 0; }