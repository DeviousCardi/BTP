#include <stdio.h>
int main() {
    long int n,k,i,j,temp;
    scanf("%ld%ld",&n,&k);
    long int arr[n];
    for(i=0;i<n;i++){
            scanf("%ld",arr[i]); }
    for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                    if(arr[i]>arr[j]){
                            temp=arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp; } } }
    printf("%ld",arr[k-1]);
    return 0; }