#include <stdio.h>
int main() {
    float a,b,c,d,j,k,p,q,r,med;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%f",&j);
    scanf("%f",&k);
    p=(a*40.0/50)+(d*60.0/100);
    q=(b*40.0/50)+(j*60.0/100);
    r=(c*40.0/50)+(k*60.0/100);
    if (((p>=q)&&(q>=r))||((r>=q)&&(q>=p))) {
        med=q; }
    else {
        if (((q>=p)&&(p>=r))||((r>=p)&&(p>=q))) {
        med=p; }
        else {
        med=r; } }
    printf("Median weighted score = %.2f",med);
	return 0; }