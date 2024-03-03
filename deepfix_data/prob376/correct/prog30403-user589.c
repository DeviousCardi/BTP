#include <stdio.h>
#include <stdlib.h>
int catalan(int k){
    int num = 0, i;
    if(k == 0||k == 1){
        return 1; }
    else {
        for(i=0; i<k; i++){
        num = num + (catalan(i)*catalan(k-i-1)); } }
    return num; }
int main() {
	int n, i, arr[15];
	scanf("%d", &n);
	for(i=0; i<n; i++){
	    scanf("%d", &arr[i]);
	    int x = arr[i];
	    printf("%d\n", catalan(x)); }
	return 0; }