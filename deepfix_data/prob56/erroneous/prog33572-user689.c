#include <stdio.h>
#include <stdlib.h>
int main()
{printf("%lf\n",fact(10));
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        int j=1;
        scanf("%d",&x);
        if(x<=0){printf("1\n");}
        else {
            while(x>cat(j)) {
                 j++; }
        printf("%d\n",cat(j+1)); } }
	return 0; }
int cat(int n) {
    return (fact(2*n))/(fact(n+1)*fact(n); }
long int fact(int n) {
    if(n<=1)
    {return 1;}
    else
    {return n*fact(n-1);} }