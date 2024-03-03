#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j,k;
    for(i=1;i<=(h+1)/2;i++) {
        for(j=1;j<=(h/2)+(1-i);j++) {
            printf(" "); }
        for(k=((h+1)/2)-i;k<=(2*i)-1;k++) {
            printf("%d",k); } }
	return 0; }