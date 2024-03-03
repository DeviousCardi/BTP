#include <stdio.h>
int main() {
    float a,b,c;
float d,e,f;
float g,h,i;
scanf("%f %f %f\n%f %f %f",&a,&b,&c,&d,&e,&f);
g=(a*40)/50.0+(d*60)/100.0;
h=(b*40)/50.0+(e*60)/100.0;
i=(c*40)/50.0+(f*60)/100.0;
if(g>=h&&g<=i||g>=i&&g<=h){
    printf("Median weighted score =%.2f",g); }
else if(h>=g&&h<=i||h<=g&&h>=i){
    printf("Median weighted score =%.2f",h); }
else{
    printf("Median weighted score =%.2f",i); }
	return 0; }