#include <stdio.h>
int fun(int n,int d)
{int i,j
    for(i=0;i<n;i++)
     {for(j=o;j<n;j++)
     {(j+d)%n=i;} }
    return j; }
int main() {
    int n,i;
    scanf("%d\n",&n);
    int num[n];
    for(i=0;i<n;i++)
     scanf("%d",&num[i]);
    int d;
    scanf("\n%d",&d);
    for(i=0;i<n;i++) {
        num[(i+d)%n]=num[i];
        printf("%2d",num[i]);
       num[i]= num[(i+d)%n]; }
    return 0; }