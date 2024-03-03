#include <stdio.h>
int main() {
    int d,n,b[40],t=0;
    scanf("%d%d",&d,&n);
    for(int i=0;i<d;i++)
    scanf("%d",&b[i]);
    for(int i=d;i<n;i++)
    b[i]=0;
    for(int i=0;i<n;i++)
        t=t+b[i];
    printf("%d",t);
	return 0; }