#include <stdio.h>
int main() {
    int a,b;
    float c;
    scanf("%d%d%f \n",&a,&b,&c);
    int sum=a+b+c;
     int product=a*b*c;
     float average=(a+b+c)/3;
     printf("%d\n ", sum );
     printf("%d\n",product);
     printf("%.3f\n",average);
	return 0; }