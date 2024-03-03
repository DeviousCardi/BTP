#include <stdio.h>
int main(){
    int n,i,d;
    scanf("%d",&n);
    int arr[2*n];
    for(i=0;i<2*n;i++) {
        scanf("%d",&arr[i]); }
    if(arr[i]==arr[n-i])
    d=n-i-i;
    printf("%d",d);
    return 0; }