#include<stdio.h>
int s=0;
int sum(int array[],int lim) {
    if(lim==0) {
        s+=array[0];
        return s; }
    s+=array[lim];
    return sum(array,lim-1); }
int main() {
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int c=sum(arr,n-1);
    printf("%d",c);
    return 0; }