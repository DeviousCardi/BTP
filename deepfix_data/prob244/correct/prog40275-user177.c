#include <stdio.h>
int main() {
    int ti;
    float tax;
    scanf("%d",&ti);
    if(ti<=200000)
    tax=0;
    else if(ti<=500000)
    tax=0.1*(ti-200000);
    else if(ti<=1000000)
    tax=30000+.2*(ti-500000);
    else
    tax=130000+0.3*(ti-1000000);
    printf("%.2f",tax);
    return 0; }