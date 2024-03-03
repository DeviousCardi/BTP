#include <stdio.h>
#include <stdlib.h>
int check(int, int*, int);
int main() {
	int N1, N2, min,i;
	int arr1[20];
	int arr2[20];
	scanf("%d", &N1);
	scanf("%d", &N2);
	for(i=0;i<N1;i++)
	    scanf("%d", &arr1[i]);
	for(i=0;i<N2;i++)
	    scanf("%d", &arr2[i]);
	for (i=0;i<N1;i++) {
	    if(arr1[i]<min && check(arr1[i], arr2[20], N2)==1)
	        min = arr1[i]; }
	printf("%d", min);
	return 0; }
int check(int x, int arr[], int n2){
    int i;
    for (i=0;i<n2;i++) {
        if(x==arr[i])
            return 0; }
    return 1; }