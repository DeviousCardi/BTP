#include <stdio.h>
#include <stdlib.h>
int hanoi(int a){
    if (a==0) return 0;
    else if (a==1) return 1;
    else return 2*hanoi(a-1)+1; }
int main() {
    int t,i;
    scanf("%d/n",&t);
    for(i=0;i<t;i++){
        int k;
        scanf("%d\n",&k);
        hanoi(k);
        printf("%d\n",hanoi(k)); } }
	return 0; }