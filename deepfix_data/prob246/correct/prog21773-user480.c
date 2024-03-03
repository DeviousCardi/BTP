#include <stdio.h>
int main() {int a;
            int b;
            int c;
            scanf("%d %d %d", &a, &b, &c);
            int s;
            s=a+b+c;
            int p;
            p=a*b*c;
            float v=(a+b+c)/3.000;
            printf("%d \n%d \n%.3f", s, p, v);
	return 0; }