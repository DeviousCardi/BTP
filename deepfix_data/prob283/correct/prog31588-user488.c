#include <stdio.h>
#include <stdlib.h>
int A(int m,int n){
    if(m==0)
    return n+1;
    else if(m>0&&n==0)
    return A(m-1,1);
    else if(m>0&&n>0)
    return A(m-1,A(m,n-1)); }
int main() {
    int k,i,j;
    int l=-1;
    scanf("%d",&k);
    for(i=0;i<=3;i++)
    {for(j=0;j<=5;j++)
    if(k==A(i,j))
	{printf("%d %d",i,j);
	 l++; break;}
	 if(l!=-1) break; }
    if(l==-1) printf("%d",l);
	return 0; }