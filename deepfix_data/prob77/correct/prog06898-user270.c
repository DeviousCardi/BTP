#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int money[n];
    int i=0,l=0;
    while (i<n) {
        scanf("%d",&money[i]);
        i++; }
    i=0;
    int max=money[0], min=money[0];
    while (i<n) {
        if ((max)<(money[i+1]))
           max = money[(i+1)];
        i++; }
    l=0;
    while (l<n) {
        if ((min)>(money[l+1]))
            min = money[l+1];
        l++; }
    printf("%d %d ",max, min);
    printf("end");
    return 0; }