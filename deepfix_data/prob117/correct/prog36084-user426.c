#include <stdio.h>
#include <stdlib.h>
int no_steps(int n){
    int steps=1;
    do{
        if(steps==n)
        return 1;
        else
        return 0;
        steps=1+(2*steps);
    }while(steps<=5000000);
    return 0; }
int main() {
	int i=0,n,temp,c;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d\n",&temp);
	    c=no_steps(temp);
	    if(c==1)
	    printf("yes\n");
	    else
	    printf("no\n"); }
	return 0; }