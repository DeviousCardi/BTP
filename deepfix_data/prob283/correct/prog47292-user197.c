#include <stdio.h>
#include <stdlib.h>
int ackermann(int m,int n) {
    if (m==0)
    return (n+1);
    else if ((m>0) && (n=0))
    return ackermann(m-1,1);
    else
    return ackermann(m-1,ackermann(m,n-1)); }
int main() {
     int n;
     scanf("%d",&n);
     int i,j;
     for(i=0;i<4;i++) {
         for(j=0;j<6;j++) {
            if(ackermann(i,j)==n)
            {printf("%d %d",i,j);
            goto out;} } }
     if (i==4)
     printf("%d",-1);
     out:
	return 0; }