#include<stdio.h>
#include<math.h>
int product(int t, int pro){
    int a;
    scanf("%d",&a);
    pro =a*pro;
    product(t-1, pro);
    if(t == 0)
        return 1;
    return pro; }
int main()
{   int  i, p = 1;
    double n;
    p = product(n,p);
    printf("%d",p);
    return 0; }