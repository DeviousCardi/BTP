#include <stdio.h>
int main() {
    float a,b,c,sa=0,sb=0,sc=0;int i,w=40,m=50;
    for(i=1;i<=2;i++) {
        scanf("%f%f%f",&a,&b,&c);
        sa+=a*w/m;
        sb+=b*w/m;
        sc+=c*w/m;
        w=w+20;m=m+50; }
	if((sa<=sb&&sb<=sc)||(sc<=sb&&sb<=sa))
	printf("Median weighted score = %.2f",sb);
	else if ((sb<=sa&&sa<=sc)||(sc<=sa&&sa<=sb))
	printf("Median weighted score = %.2f",sa);
	else if ((sb<=sc&&sc<=sa)||sa<=sc&&sc<=sb)
	printf("Median weighted score = %.2f",sc);
	return 0; }