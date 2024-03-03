#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) { }
int main() {
    int n;
    scanf("%d", &n);
    int count5, count3, count1;
    count5 = n/5;
    n = n%5;
    count3 = n/3;
    n = n%3;
    count1 = n;
    printf("%d", 3*count5+2*count3+count1);
    return 0; }