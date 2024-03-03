#include <stdio.h>
#include <stdlib.h>
int i=0,j=0;
int Ackermann(int m,int n) {
    if( m==0 )
        return n+1;
    if( m>0 && n==0 )
        return Ackermann(m-1,1);
    else
        return Ackermann( m-1, Ackermann(m,n-1) ); }
int index_k(int k) {
    int count=0;
    for(i=0;i<=3;i++)
        for(j=0;j<=5;j++)
            if(Ackermann(i,j)==k) {
                count++;
                return count; }
    return 0; }
int main() {
	int k,count;
	scanf("%d",&k);
	count=index_k(k);
	if(count==1)
	    printf("%d %d",i,j);
	else
	    printf("-1");
	return 0; }