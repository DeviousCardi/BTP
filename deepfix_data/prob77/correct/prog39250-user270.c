#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int money[n];
    int i=0;
    while (i<n) {
        scanf("%d",&money[i]);
        i++; }
    i=0;
    int max=money[0], min=money[0];
    while (i<n) {
        if ((max)<(money[i+1]))
           max = money[(i+1)];
        i++; }
    i=0;
    while (i<n) {
        if ((min)>(money[i+1]))
            min = money[i+1];
        i++; }
    printf("%d %d ",max, min);
    printf("end");
    return 0; }