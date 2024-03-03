#include <stdio.h>
#include <stdlib.h>
int belongs(int n) {
    if(n==1) {
        return 1; }
    else if(n%2==0) {
        belongs(n/2); }
    else {
        return 0; } }
int main() {
    int t,k;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i+=1) {
        scanf("%d",&k);
        if(belongs(k+1)) {
            printf("yes\n"); }
        else {
            printf("no\n"); } }
	return 0; }