#include <stdio.h>
int main() {
	float Ams,Bms,Cms,Aes,Bes,Ces;
	scanf("%f%f%f\n%f%f%f",&Ams,&Bms,&Cms,&Aes,&Bes,&Ces);
	float A=Ams*40.0/50 + Aes*60.0/100;
	float B=Bms*40.0/50 + Bes*60.0/100;
	float C=Cms*40.0/50 + Ces*60.0/100;
	float M;
	if (A<=B)
	{ if (C<=A) M=A;
	  else if (B<=C) M=B;
	  else M=C; }
	else {
	    if (C<=B) M=B;
	    else if (A<=C) M=A;
	    else M=C; }
	printf("%.2f",M);
	return 0; }