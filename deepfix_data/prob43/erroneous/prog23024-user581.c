#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main() {
    float x,a,b;
    int i,n;
    float sum=0;
   scanf("%f",a);
    scanf("%f",b);
    scanf("%f",n);
    for (i=0;i<n;i++) {
        x=a+(i*(b-a))/n;
        sum=sum+mod((-2*x*x*x)+(8*x)*(b-a)/n);
        printf("%f",sum); }
	return 0; }
    int modulus(int x);
    int main() {
        if(x<0)
        return -x;
        if(x>0)
        return x; }