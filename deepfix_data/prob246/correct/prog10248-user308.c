#include <stdio.h>
int main() {
    int a,b;
    float c;
    printf(" enter the  value a,b and c\n");
    scanf("%d%d%f",&a,&b,&c);
    int sum=a+b+c;
     int product=a*b*c;
     float average=(a+b+c)/3;
     printf("%d is sum of vaule\n",sum );
     printf("%d is product of value\n ",product);
     printf(" % 3f% is average of value \n",average);
	return 0; }