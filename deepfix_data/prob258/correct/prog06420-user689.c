#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,eof,j;
    i = 0;
    int a[i];
    scanf("%d\n",&n);
    while(a[i]!=eof && i<=n) {
        scanf("%d\n",&a[i]);
        i++; }
    while(j<=i) {
        if(a[j]>a[j-1]&&a[j]>a[j+1]) {
            printf("Yes"); }
        else {
            printf("No"); }
        j++; }
	return 0; }