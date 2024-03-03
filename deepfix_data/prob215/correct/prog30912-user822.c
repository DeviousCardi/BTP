#include <stdio.h>
#include <stdlib.h>
int sum(int n) {
    int i;int s;
    for(i=1;i<=(n/2);i++) {
        if(n%i==0) {
            s=s+i; } }
    return s; }
int main() {
    int n;
    scanf("%d",&n);
 if(n==1) {
     printf("YES\n"); }
 else {
    int z=sum(n);
    if(z==n) {
        printf("YES\n"); }
    else {
         printf("NO\n"); } }
	return 0; }