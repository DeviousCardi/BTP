#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sum =(a+b+c);
    int product =(a*b*c);
    float average = ((a+b+c)/2);
    printf("%d/n",sum);
    printf("%d/n",product);
    printf("%f/n",average);
    return 0; }