#include <stdio.h>
#include <stdlib.h>
int i,f[20];
void fill() {
    f[0]=0;
    f[1]=1;
    for(i=2;i<20;i++)
        f[i]=f[i-1]+f[i-2]; }
int main() {
	fill();
	int t,k;
	scanf("%d",&t);
	while(t--) {
	    scanf("%d",&k);
	    for(i=0;i<20;i++)
	        if(k==f[i]) {
	            puts("yes");
	            break; }
	    if(i==20)
	        puts("no"); }
	return 0; }