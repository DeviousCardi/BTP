#include <stdio.h>
int main() {
    int a,b,c;
    int s,p;
    float avg;
    scanf("%d %d %d",&a,&b,&c);
    s=a+b+c;
    printf("%d \n",s);
    p=a*b*c;
    printf("%d \n",p);
    avg=s/3;
    printf(".3%f \n",avg);
	return 0; }