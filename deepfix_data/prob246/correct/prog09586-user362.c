#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int s=a+b+c;
    int p=a*b*c;
    float z=(a+b+c)/3.0;
    scanf("%d%d%f",&s,&p,&z);
    printf("%d%d%.3f",s,p,z);
	return 0; }