#include <stdio.h>
#include <stdlib.h>
void towers(int k, char x,char y,char z)
int main() {
     int k;
	scanf("%d",&k);
	towers(k,'A','B','C');
	return 0; }
	void towers(int k,char x,char y,char z) {
	    if(k==1)
	    printf("%c char x to %c char y",&x,&y); }
	    return 0;
	    tower(k-1 ,y,z,x);
	    tower(k-1,z,x,y);
	    return 0; }