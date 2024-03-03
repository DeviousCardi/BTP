#include <stdio.h>
void swap(int *a,int *b) {
    int t;
    t=*a;
    *a=*b;
    *b=t;
    return; }
int main() {
    int i,j,n,k,arr[100000];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",arr+i);
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++)
        if(arr[j]>arr[i])
        swap(arr+j,arr+i); }
    printf("%d",arr[k-1]);
    return 0; }