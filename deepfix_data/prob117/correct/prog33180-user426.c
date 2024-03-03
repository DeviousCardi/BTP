#include <stdio.h>
#include <stdlib.h>
int no_steps(int n){
    int steps=1;
    while(steps<=5000000){
        if(steps==n)
        return 1;
        else
        return 0;
        steps=1+2*steps; } }
int main() {
	int i=0,n,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&temp);
	    if(no_steps(temp))
	    printf("yes");
	    else
	    printf("no"); }
	return 0; }