#include <stdio.h>
int main() {
	float mid[3];
	float end[3];
	float net[3];
	float median;
	int i,j,k;
	for(i=0;i<3;i++){
	    scanf("%f",&mid[i]); }
	for(j=0;j<3;j++){
	    scanf("%f",&end[j]); }
	for(k=0;k<3;k++){
	    net[k]=mid[k]*(40.0/50.0)+end[k]*(60.0/100.0); }
	if(net[0]>net[1]){
	    if(net[1]>net[2]) median=net[1];
	    else{
	        if(net[0]>net[2]) median=net[2];
	        else median=net[0]; } }
	else{
	    if(net[0]>net[2]) median=net[0];
	    else{
	        if(net[1]>net[2]) median=net[2];
	        else median=net[1]; } }
	printf("Median weighted score=%.2f",median);
	return 0; } }