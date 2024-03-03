#include <stdio.h>
int main() {
	float am,bm,cm,ae,be,ce,af,bf,cf;
	scanf("%f%f%f%f%f%f",&am,&bm,&cm,&ae,&be,&ce);
	af=am/50*40 + ae/100*60;
	bf=bm/50*40 + be/100*60;
	cf=cm/50*40 + ce/100*60;
	if(af>bf) {
	    if(bf>cf)
	    printf("Median weighted score = %.2f",bf);
	    else if(af>cf)
	    printf("Median weighted score = %.2f",cf);
	    else
	    printf("Median weighted score = %.2f",af); }
	else {
	    if(af>cf)
	    printf("Median weighted score = %.2f",af);
	    else if(bf>cf)
	    printf("Median weighted score = %.2f",cf);
	    else
	    printf("Median weighted score = %.2f",bf); }
	return 0; }