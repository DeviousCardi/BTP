#include <stdio.h>
int main() {
    long int n;
    scanf("%ld",&n);
    int arr[n];
    int k = n/2;
    int i,j;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++){
        int min = arr[i];
        for(j=i+1;j<n;j++){
            if(min>arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t; } } }
    if(n%2!=0)
    printf(%ld,arr[k]);
    else
    printf("%ld",(arr[k-1]+arr[k+1])/2);
    return 0; }