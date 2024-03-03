#include <stdio.h>
int main() {
    int a,b,c,sum;
    int pro;
    float avg;
    scanf("%d %d %d",&a,&b,&c);
    sum = a+b+c;
    pro=(a*b*c);
    avg = (a+b+c)/3;
    printf("%d\n",sum);
    printf("%d\n",pro);
    printf("%.3f",avg);
	return 0; }