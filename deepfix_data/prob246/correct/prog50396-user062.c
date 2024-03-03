#include <stdio.h>
int main() {
    int a[3],i;
    for(i=0;i<3;i++){
        scanf("%d",&a[i]); }
    int sum,multi;
    sum = a[0]+a[1]+a[2];
    multi = a[0]*a[1]*a[2];
    float avg = sum*1.0/3;
    printf("%d\n%d\n%.3f",sum,multi,avg);
	return 0; }