#include <stdio.h>
#include <stdlib.h>
int sort(int a[],int n) {
    int i;int j;int b;
    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (a[i] > a[j]) {
                b =  a[i];
                a[i] = a[j];
                a[j] = b; } } } }
int main() {
	int a[20];int b[20];int flag=0;
	int n1;int n2;int i;int k;int start=0;int c;
	scanf("%d \n",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d \n",&a[i]); }
	scanf("%d \n",&n2);
	for(i=0;i<n2;i++) {
	    scanf("%d \n",&b[i]); }
	return 0; }