#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<=n-1; i++){
    scanf("%d",&a[i]); }
    int count=0
    for(i=1; i<n-1; i++){
    if((a[i]<a[i-1])&&(a[i]<a[i+1])){
        printf("Yes");
        break; }
	else
	printf("No"); }
	return 0; }