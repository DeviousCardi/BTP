#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if (n==0)
    return 0;
    if (n==1)
    return 1;
    return 2*hanoi(n-1)+1; }
int main() {
    int t;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++) {
        int k;
        scanf("%d",&k);
        int j=0;
        while(j+1) {
            if(hanoi(j)==k) {
                printf("yes\n");
                break; }
            else if(hanoi(j)>k) {
                printf("no\n");
                break; }
            j++; } }
	return 0; }