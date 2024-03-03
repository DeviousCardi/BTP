#include <stdio.h>
#include <stdlib.h>
int main() {
    int toh(int x);
    int n,i,j,t;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&t); {
            for(j=1;j<100;j++) {
                if(toh(j)==t) {
                    printf("yes\n"); }
                else {
                printf("no\n"); } } } }
	return 0; }
int toh(int x) {
    int n;
    if(x==0)
    return 0;
    else {
        n=2*(toh(x-1))+1;
        printf("%d",n);
        return n; } }