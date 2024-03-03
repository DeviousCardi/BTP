#include <stdio.h>
int main() {
	float sa1,sa2,sb1,sb2,sc1,sc2;
	scanf("%f%f%f\n%f%f%f\n",&sa1,&sb1,&sc1,&sa2,&sb2,&sc2);
	sa1=(sa1*40.0)/50.0;
	sb1=(sb1*40.0)/50.0;
	sc1=(sc1*40.0)/50.0;
	sa2=(sa2*60.0)/100.0;
	sb2=(sb2*60.0)/100.0;
	sc2=(sc2*60.0)/100.0;
	float m1,m2,m3,f;
	m1=sa1+sa2;
	m2=sb1+sb2;
	m3=sc1+sc2;
	if(((m2-m3)*(m2-m1))<=0) {
	    printf("Median weighted score = %.2f",m2);
	}else {
	    if(((m1-m3)*(m1-m2))<=0) {
	    printf("Median weighted score = %.2f",m1);
	    }else
	    if(((m3-m1)*(m3-m2))<=0) {
	       printf("Median weighted score = %.2f",m3); } }
	printf("Median weighted score = %.2f",m2);
	return 0; }