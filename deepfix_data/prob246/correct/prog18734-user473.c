#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    int p;
    int q;
    float r;
    p=a+b+c;
    q=a*b*c;
    r=(a+b+c)/3.0;
    printf("%d\n%d\n%.3f",p,q,r);
	return 0; }