#include <stdio.h>
int main() {
    float ma,mb,mc;
    float ea,eb,ec;
    float a,b,c;
    float med;
    scanf("%f %f %f",&ma,&mb,&mc);
    scanf("%f %f %f",&ea,&eb,&ec);
    a= ma*4.0/5+ea*3.0/5;
      b= mb*4.0/5+eb*3.0/5;
	  c= mc*4.0/5+ec*3.0/5;
      if(a>=b) {
          if(c>=a)
          printf("Median weighted score = %.2f",a);
          else
          {if(c>=b)
          printf("Median weighted score = %.2f",c);
          else
          printf("Median weighted score = %.2f",b);
      }}
      else {
          if(c<=a)
          printf("Median weighted score = %.2f",a);
          else
          {if(b>=c)
          printf("Median weighted score = %.2f",c);
          else printf("Median weighted score = %.2f",b);} }
	return 0; }