#include <stdio.h>
int main() {
    int j;
    int k;
    int l;
    scanf("%d%d%d",&j,&k,&l);
    int s;
    int p;
    float avg;
    s=j+k+l;
    p=j*k*l;
    avg=j+k+l/3;
    printf("%d\n",s);
    printf("%d\n",p);
    printf("%f",avg);
	return 0; }