#include <stdio.h>
int main() {
	float ma,mb,mc,ea,eb,ec;
	float sa,sb,sc;
	scanf("%f",&ma);
	scanf("%f",&mb);
	scanf("%f",&mc);
	scanf("%f",&ea);
	scanf("%f",&eb);
	scanf("%f",&ec);
	sa = ((ma*40)/50)+((ea*60)/100);
	sb = ((mb*40)/50)+((eb*60)/100);
	sc = ((mc*40)/50)+((ec*60)/100);
	if((sa<=sb&&sb<=sc)||(sc<=sb&&sc<=sa)){
	    printf("Median weighted score = %.2f",sb); }
	else if((sc<=sa&&sa<=sb)||(sb<=sa&&sa<=sc)){
	    printf("Median weighted score = %.2f",sa); }
	else{
	    printf("Median weighted score = %.2f",sc); }
	return 0; }