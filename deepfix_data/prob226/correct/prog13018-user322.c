#include <stdio.h>
int s(int i,int b[],int d){
    if(0<=i<d)
    return b[i];
    if(i==d){
    int j,p;
    p=0;
    for(j=0;j<d;j++)
     p=p+b[j];
     return p; }
    if(i>d) return (2*s(i-1,b,d))-s(i-d-1,b,d); }
int main() {
 int d,n,b[20],i;
 scanf("%d %d\n",&d,&n);
 for(i=0;i<d;i++)
 scanf("%d",&b[i]);
 printf("%d",s(n,b,d));
	return 0; }