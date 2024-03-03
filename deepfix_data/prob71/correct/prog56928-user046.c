#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++) {
        int sm=arr[i];int pos=i;
        for(int j=i;j<n;j++) {
            if(sm>arr[j]) {
                sm=arr[j];
                pos=j; } }
        int temp=arr[i];
        arr[i]=sm;
        arr[pos]=temp; }
    int med;int h=n/2;
    if((n%2)==0) {
        med=(arr[h-1]+arr[h])/2; }
    else
    med=arr[h];
    printf("%d",med);
    return 0; }