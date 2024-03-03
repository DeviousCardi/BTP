#include <stdio.h>
int main() {
    int a,b,c;
    int s,p;
    float avg;
    scanf("%d %d %d",&a,&b,&c);
    s=a+b+c;
    printf("%d\n",s);
    p=a*b*c;
    printf("%d\n",p);
    avg=((a+b+c)/3.0);
    printf("%.3f",avg);
	return 0; }