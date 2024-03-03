#include <stdio.h>
#include <stdlib.h>
int main() {
    int ti;
    float tax;
    scanf("%d", &ti);
    if (ti <= 200000)
    printf("%d", ti);
    if ((ti >= 200001) && (ti <= 500000))
    tax = (10.0/100.0) * (ti - 200000);
    printf("%f", tax);
    if ((ti>=500001) && (ti <= 1000000))
    tax = 30000 + ((20.0/100.0)*(ti-500000));
    printf("%f", tax);
    if (ti>=1000001)
    tax = 130000 + ((30.0/100.0)*(ti-1000000));
    printf("%f", tax);
	return 0; }