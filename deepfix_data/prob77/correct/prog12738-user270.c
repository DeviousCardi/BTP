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
    int max, min;
    while (i<n) {
        if (i=n-1) break;
        if ((money[i])<(money[(i+1)]))
           max = money[(i+1)];
        else max=money[i];
        i++; }
    printf("%d",max);
    printf("end");
    return 0; }