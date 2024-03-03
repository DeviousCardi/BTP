#include <stdio.h>
int main() {
    int a,b,c,s,m;
    float av;
    scanf ("%d %d %d",&a,&b,&c);
	s = a+b+c;
	m=a*b*c;
	av=(a+b+c)/3.0;
	printf ("%d\n",s);
	printf ("%d\n",m);
	return 0; }