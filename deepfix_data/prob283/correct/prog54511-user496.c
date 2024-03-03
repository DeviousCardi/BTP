#include <stdio.h>
#include <stdlib.h>
int Ackermann(int n,int m) {
    if(m==0)
        return n+1;
    if(m>0&& n==0)
        return Ackermann(m-1,1);
    else
        return Ackermann(m-1,Ackermann(m,n-1)); }
void index_k(int k,int i,int j) {
    int count=0;
    for(i=0;i<=3;i++)
        for(j=0;j<=5;j++)
            if(Ackermann(i,j)==k) {
                count++;
                return; } }
int main() {
	int k,i=0,j=0,count;
	scanf("%d",&k);
	index_k(k,i,j);
	if(count==1)
	    printf("%d %d",i,j);
	else
	    printf("-1");
	return 0; }