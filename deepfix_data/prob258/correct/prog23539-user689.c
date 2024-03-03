#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,j,b;
    i = 0;
    int a[i];
    scanf("%d\n",&n);
    while(i<n) {
        scanf("%d\n",&a[i]);
        i++; }
    j = 0; b = 0;
    while(j<i) {
    if(a[j]>a[j-1]&&a[j]>a[j+1]) {
            b++; }
        j++; }
    if(b==0) {
        printf("Yes"); }
    else {
        printf("No"); }
	return 0; }