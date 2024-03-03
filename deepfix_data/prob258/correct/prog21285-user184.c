#include <stdio.h>
#include <stdlib.h>
int check(int arr[], int i) {
    if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
    return 1;
    return 0; }
int main() {
    int n;
    scanf("%d", &n);
    int i;
    int arr[n];
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]); }
    int flag=0;
    if(arr[0]>arr[1] || arr[n-1]>arr[n-2])
        flag=1;
    for(i=1; i<n-1; i++)
        if(check(arr, i))
            flag=1;
    if(flag)
        printf("Yes\n");
    else
        printf("No\n");
	return 0; }