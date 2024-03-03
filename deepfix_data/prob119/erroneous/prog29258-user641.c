#include <stdio.h>
#include <stdlib.h>
int hanoi(int a){
    if (a==0)
        return 0;
    if (a==1)
        return 1;
    hanoi(a)=2*hanoi(a-1)+1; }
int main() {
	int n;
	int arr[1000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	   scanf("%d\n",&arr[i]); }
	for(i=0;i<n;i++){
	    printf("%d\n",hanoi(arr[i])); }
	return 0; }