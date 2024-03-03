#include <stdio.h>
int main() {
	float mid[3];
	float end[3];
	float net[3];
	int i,j,k;
	for(i=1;i<4;i++){
	    scanf("%f",&mid[i]); }
	for(j=1;j<4;j++){
	    scanf("%f",&end[i]); }
	for(k=1;k<4;k++){
	    net[k]=mid[i]*(40/30.0)+end[i]*(60.0/100); }
	for(k=1;k<4;k++){
	    printf("%f ",net[k]); }
	return 0; }