#include<stdio.h>
#include<math.h>
int product(int t, int pro){
    int a;
    if(t == 0){
        return pro;
        printf("%d*",pro); }
    scanf("%d",&a);
    pro =a*pro;
    printf("%d*",pro);
    pro = product(t-1, pro);
    return pro; }
int main()
{   int p = 1;
    double n;
    scanf("%lf",&n);
    p = product(n,p);
    printf("%d",p);
    return 0; }