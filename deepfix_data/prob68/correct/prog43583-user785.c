#include<stdio.h>
#include<math.h>
int product(int t, double pro){
    double a;
    if(t == 0){
        return pro; }
    scanf("%lf",&a);
    pro =a*pro;
    pro = product(t-1, pro);
    return pro; }
int main()
{   int p = 1;
    double n;
    scanf("%lf",&n);
    p = product(n,p);
    printf("%d",p);
    return 0; }