#include <stdio.h>
#include <stdlib.h>
int hanoi(int d){
    if(d==0)
      return 0;
    return (2*hanoi(d-1) +1); }
int main() {
	int t,i,ndisc;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&ndisc);
	    printf("%d\n",hanoi(ndisc)); }
	return 0; }