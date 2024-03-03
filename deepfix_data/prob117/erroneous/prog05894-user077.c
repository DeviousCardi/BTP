#include <stdio.h>
#include <stdlib.h>
int r;
void hanoi(int n){
    if (n<0)
        r=0;
    else if(n==0||n==1)
        r=1;
    else if(((n-1)%2)!=0)
        r=0;
    else r=hanoi((k-1)/2); }
int main() {
	int k,i;
	scanf("%d", &k);
	int arr[k];
	for(i=0;i<k;i++){
	    scanf("%d", &a[i]); }
	return 0; }