#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    int sum =(a+b+c);
    int product =(a*b*c);
    float average = ((a+b+c)/2);
    printf("%d",sum);
    printf("%d",product);
    printf("%f",average);
    return 0; }