#include <stdio.h>
#include <stdlib.h>
int sumdiv(int n) {
    int S;S=0;
    for(i=1;i<(n/2)+1;i=i+1) {
        if(n%i==0){S=S+i;} }
    return S; }
int main() {
	int N;
	scanf("%d",&N);
	if(sumdiv(N)==N){printf("Yes");}
	else{printf("No");}
	return 0; }