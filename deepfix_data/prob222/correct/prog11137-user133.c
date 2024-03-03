#include <stdio.h>
int main() {
float a,b,c;
float d,e,f;
scanf("%f %f %f",&a,&b,&c);
scanf("%f %f %f",&d,&e,&f);
float s1=a*40/50+d*60/100;
float s2=b*40/50+e*60/100;
float s3=c*40/50+f*60/100;
if((s1>=s2&&s1<=s3)||(s1>=s3&&s1<=s2))
printf("Median weighted score = %.2f",s1);
else if((s2>=s3&&s2<=s1)||(s2>=s1&&s2<=s3))
printf("Median weighted score = %.2f",s2);
else
printf("Median weighted score = %.2f",s3);
	return 0; }