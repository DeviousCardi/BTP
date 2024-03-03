#include <stdio.h>
int main() {
    float amid,bmid,cmid;
	scanf("%f%f%f",&amid,&bmid,&cmid);
	float aend,bend,cend;
	scanf("%f%f%f",&aend,&bend,&cend);
	float aw,bw,cw;
	aw = amid*0.8 + aend*0.6;
	bw = bmid*0.8 + bend*0.6;
	cw = cmid*0.8 + cend*0.6;
	float median;
	if((aw>=bw && aw<=cw) || (aw<=bw && aw>=cw))
	    median=aw;
	else if((bw>=aw && bw<=cw) || (bw>=cw && bw<=aw))
	    median=bw;
	else
	    median=cw;
	printf("Median weighted score = %.2f",median);
	return 0; }