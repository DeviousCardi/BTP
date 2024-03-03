#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return ((2*(hanoi(n-1))+1)); }
int main() {
    int t,i;
    scanf("%d\n",&t);
    int arr[t];
    for(i=0;i<t;i++) {
        scanf("%d\n",&arr[i]); }
    for(i=0;i<t;i++) {
        printf("%d\n",hanoi(arr[i])); }
	return 0; }