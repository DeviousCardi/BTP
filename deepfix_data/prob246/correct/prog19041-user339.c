#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sum =(a+b+c);
    int product =(a*b*c);
    double average = ((a+b+c)/3);
    printf("%d\n",sum);
    printf("%d\n",product);
    printf("%.e",average);
    return 0; }