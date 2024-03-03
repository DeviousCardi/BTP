#include <stdio.h>
int hanoi(int k){
    if(k==1)return 1;
    else if(k==0)return 0;
    else return 2*hanoi(k-1)+1; }
int main() {
	int t,k;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&k);
	    printf("%d\n",hanoi(k)); }
	return 0; }