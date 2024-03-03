#include <stdio.h>
int *s,*p;
float *v;
void spa(int *a,int *b,int *c) {
    *s=(*a+*b+*c);
    *p=((*a)*(*b)*(*c));
    *v=(float)*s/3; }
int main() {
	int *a,*b,*c;
	int d,e,f;
	a=&d;
	b=&e;
	c=&f;
    scanf("%d %d %d",a,b,c);
    spa(a,b,c);
    printf("%d %d %f",*s,*p,*v);
	return 0; }