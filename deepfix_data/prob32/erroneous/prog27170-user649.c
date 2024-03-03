#include <stdio.h>
#include <stdlib.h>
void minima(int arr[], int size, int index) {
    if(index==0) {
        if(arr[0],arr[1])
            printf("Yes\n");
        else
            printf("No\n"); }
    else if(index==size-1) {
        if(arr[size-1]<arr[size-2])
            printf("Yes\n");
        else
            printf("No\n"); }
    else {
        if(arr[index]<arr[index+1] && arr[index]<arr[index+1])
            printf("Yesn\n");
        else
            printf("No\n"); } }
int main() {
    int n, i, arr1[20], t, t_val
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &arr1[i]);
    scanf("%d", &t);
    for(j=1; j<=t; j++) {
        scanf("%d", &t_val);
        minima(arr1[], n, t_val); }
	return 0; }