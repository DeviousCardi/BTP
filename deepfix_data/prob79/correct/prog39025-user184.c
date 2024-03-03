#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[100000];
    int i;
    for(i=0; i<n; i++) {
        scanf("%d", arr+i);
        arr[i]=((i==0)?arr[i]:arr[i]+arr[i-1]); }
    for(i=0; i<n; i++) {
        if(arr[i]>arr[n-1]/2)
        break; }
    printf("%d %d\n", i, n-i);
	return 0; }