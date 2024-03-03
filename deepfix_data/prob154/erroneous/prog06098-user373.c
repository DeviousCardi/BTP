#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n , i;
	double a, b, x, fx, area1, area2, area3, area;
	scanf("%d %lf %lf",&n, &a, &b);
	for(i=0; i<=n; i++)
    {   if (x<=-1) {
            fx=1;
            area1 = ((b-a)/n)*i*(fx); }
        if (x>-1 && x<1) {
            fx=pow(x,2);
            area2 = ((b-a)/n)*i*(fx); }
        if (x>=1) {
            fx=pow(x,3);
            area3 = ((b-a)/n)*i*(fx); }
	area = area1 + area2 + area3;
	printf("%.4f",area);
	return 0; }