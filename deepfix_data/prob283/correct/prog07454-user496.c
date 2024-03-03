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
    int p,q,count=0;
    for(p=0;p<=3;p++)
        for(q=0;q<=5;q++)
            if(Ackermann(p,q)==k) {
                i=p;
                j=q;
                count++;
                return; } }
int main() {
	int k,i,j,count;
	scanf("%d",&k);
	index_k(k,i,j);
	if(count==1)
	    printf("%d %d",i,j);
	else
	    printf("-1");
	return 0; }