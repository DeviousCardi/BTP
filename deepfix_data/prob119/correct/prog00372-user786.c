#include <stdio.h>
#include <stdlib.h>
int hanoi(int i){
    int steps;
    if(i==0){return 0;}
    if(i>0){steps=2*hanoi(i-1)+1;}
    return steps; }
int main() {
	int t,arr[999],i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&arr[i]);
	    printf("%d\n",hanoi(arr[i])); }
	return 0; }