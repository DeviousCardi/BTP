#include <stdio.h>
int main() {
    int d,n,b[30],t=0;
    scanf("%d%d",&d,&n);
    for(int i=0;i<d;i++)
    {scanf("%d",&b[i]);printf("%d",b[i]);}
    for(int i=0;i<n;i++)
        t=t+b[i];
    printf("%d",t);
	return 0; }