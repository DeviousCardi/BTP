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
    avg=s/3;
    printf("%d%d%f",s,p,avg);
	return 0; }