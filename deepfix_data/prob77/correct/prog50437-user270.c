#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int money[n];
    int i=0;
    while (i<n) {
        scanf("%d",&money[i]);
        i++; }
    int max, min; {
        if ((money[i])<(money[i+1]))
           max = money[i+1];
        else max=money[i]; }
    printf("%d",max);
    printf("end");
    return 0; }