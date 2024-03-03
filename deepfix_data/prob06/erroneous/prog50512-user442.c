#include <stdio.h>
#include <stdlib.h>
void sort(int a[], int len) {
    int i, j, temp;
    for(i=0; i<len-1; i++) {
        for(j=0; j<len-1-i; j++) {
            if(a[j]>a[j+1])
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp; } } }
int main() {
    int n, i;
    scanf("%d",&n)
	int a[n];
	for(i=0; i<n; i++) {
	    scanf("%d",&a[i]); }
	sort(a, n);
	for(i=0; i<n; i++)
	printf("%d",a[i]);
	return 0; }