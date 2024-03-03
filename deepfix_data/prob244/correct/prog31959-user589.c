#include <stdio.h>
#include <stdlib.h>
int main() {
    int ti;
    float tax;
    scanf("%d\n", &ti);
    if (ti <= 200000)
    printf("%d\n", ti);
    if (ti >= 200001 && ti <= 500000) {
        tax = (10.0/100.0) * (ti - 200000);
        printf("%.2f\n", tax); }
    if (ti >= 500001 && ti <= 1000000) {
        tax = 30000 + ((20.0/100.0)*(ti-500000));
        printf("%.2f\n", tax); }
    if (ti >= 1000001) {
      tax = 130000 + ((30.0/100.0)*(ti-1000000));
      printf("%.2f\n", tax); }
	return 0; }