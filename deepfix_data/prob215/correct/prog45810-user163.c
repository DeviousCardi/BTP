#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int n,i;
    int count=0;
    for(i=1;i<=n;i++) {
        scanf("%d\n",&n);
        if(n%i==0) {
            count=count+i;
            count++; }
        if(n%i!=0) {
            continue; } }
    if(count==n) {
        printf("YES"); }
    else {
        printf("NO"); }
	return 0; }