#include <stdio.h>
#include <stdlib.h>
int toh(int nod){
    if(nod==1)  return 1;
    else if(nod>1){
        return 2*toh(nod-1)+1; }
    printf("%d\n",toh(nod)); }
int main() {
	int k,t,i;
	scanf("%d",&t);
	scanf("%d",&k);
	for(i=0;i<t;i++){
	   toh(k); }
	return 0; }