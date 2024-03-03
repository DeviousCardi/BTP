#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[100000];
    int i;
    for(i=0; i<n; i++) {
        scanf("%d", arr+i); }
    i=0;
    int j=n-1, sumi=arr[i], sumj=arr[j];
    while(i!=j) {
        if(sumi<=sumj) {
            i++;
            sumj+=arr[i]; }
        else {
            j++;
            sumi+=arr[j]; } }
    printf("%d %d\n", i+1, n-i-1);
	return 0; }