#include<stdio.h>
long int s=0;
int sum(long int array[],int lim) {
    if(lim==0) {
        s+=array[0];
        return s; }
    s+=array[lim];
    return sum(array,lim-1); }
int main() {
    int n;
    scanf("%d\n",&n);
    long int arr[n];
    for(int i=0;i<n;i++)
    scanf("%li",&arr[i]);
    long int c=sum(arr,n-1);
    printf("%li",c);
    return 0; }