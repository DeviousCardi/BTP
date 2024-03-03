#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<=(n-1);i++) {
     if((i-1)>=0) {
        if(a[i-1]>a[i]) {
            if(i+1<=(n-1)) {
                if(a[i+1]>a[i]) {
                    printf("Yes");
                    break; } } } } }
    if(i==n)
    printf("No");
	return 0; }