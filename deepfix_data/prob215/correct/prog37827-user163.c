#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int n,i;
    int a[20];
    scanf("%d\n",&n);
    int count=0;
    for(i=1;i<=n;i++) {
        scanf("%d\n",&a[i]);
        if(a[i]%i==0) {
            count=count+i;
            count++; } }
    if(count==n) {
        printf("YES"); }
    else {
       printf("NO"); }
	return 0; }