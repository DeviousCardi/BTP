#include <stdio.h>
#include <stdlib.h>
int hanoi(int a){
    if (a==0)
        return 0;
    if (a==1)
        return 1;
    return 2*hanoi(a-1)+1; }
int main() {
	int n,i,j;
	int arr[1000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	   scanf("%d\n",&arr[i]); }
	for(j=0;j<n;j++){
	    printf("%d\n",hanoi(arr[i])); }
	 printf("%d\n",hanoi(1));
	return 0; }