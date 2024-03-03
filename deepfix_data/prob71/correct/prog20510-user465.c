#include <stdio.h>
int main() {
    long n,arr[100000];
    scanf("%li",&n);
    for(int i=0;i<n;i++)
    scanf("%li",&arr[i]);
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            if(arr[i]>arr[j]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp; } } }
    if(n%2==0) {
        float median=(float)(arr[n/2]+arr[n/2-1])/2;
        printf("%.1f",median); }
    else {
        long median=arr[n/2];
        printf("%li",median); }
    return 0; }