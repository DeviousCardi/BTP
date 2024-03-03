#include <stdio.h>
#include <stdlib.h>
long cat(int n) {
	    int j;
	    long sum=0;
	    if (n<2)
	    {return 1;}
	    else {
	        for(j=0;j<n;j++)
	        sum=sum+(cat(j)*cat(n-j-1));
	        return sum; } }
int main() {
    int i,t,k,j;
    scanf("%d\n",&t);
    for(i=0;i<t;i++){
        scanf("%d\n",&k);
        if(k<=0)
        printf("1\n");
        for(j=1;j<=k;j++) {
            if(k<cat(j)) {
                printf("%lu\n",cat(j));
                break; }
            if(k==cat(j)) {
                printf("%lu\n",cat(j+1));
                break; } } }
    return 0; }