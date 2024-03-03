#include <stdio.h>
int main()
{  float am,bm,cm,ae,be,ce,a,b,c;
   float midsem=50.0, endsem=100.0;
    scanf("%f %f %f",&am,&bm,&cm);
    scanf("%f %f %f",&ae,&be,&ce);
    a = am/midsem *40 + ae/endsem *60;
    b = bm/midsem *40 + be/endsem *60;
    c = cm/midsem *40 + ce/endsem *60;
	if(a<b) {
	    if(b<c)
	    printf("%.2f",b);
	    else if (c<a)
	    printf("%.2f",a);
	    else
	    printf("%.2f",c) }
	else {
	    if(b>c)
	    printf("%.2f",b);
	    else if(c>a)
	    printf("%.2f ",a);
	    else
	    printf("%.2f",c); }
	return 0; }