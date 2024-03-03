#include<stdio.h>
int length_longest_subsequence(int a[],int n){
    int i;
    int arr[n];
    arr[0]=1;
    for(i=1;i<n;i++) {
        if(a[i]>a[i-1])
        arr[i]=arr[i-1]+1;
        else
        arr[i]=arr[i-1]; }
    return arr[n-1]; }
int main() {
    int a[10000],n,i,maximum;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    maximum=length_longest_subsequence(a,n);
    printf("%d",maximum);
    return 0; }