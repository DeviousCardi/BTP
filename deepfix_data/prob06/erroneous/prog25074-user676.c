#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n,m,x,y,*A,*B,*C,*D,i,j,k=0,count=0;
    scanf("%ld%ld%ld%ld",&n,&m,&x,&y);
    A=(long int *)malloc(n*sizeof(long int));
    B=(long int *)malloc(m*sizeof(long int));
    C=(long int *)malloc(n*sizeof(long int));
    D=(long int *)malloc(n*sizeof(long int));
    for(i=0;i<n;i++) {
        scanf("%ld",A+i); }
    for(i=0;i<m;i++) {
        scanf("%ld",B+i); }
    for(i=0;i<n;i++) {
        for(j=count;j<m;j++) {
            if(*(A+i)-x<=*(B+j)&&*(B+j)<=*(A+i)+y) {
              count++;
              *(C+k)=i+1;
              *(D+k)=j+1;
              k++;
              break; } } }
    printf("%ld\n",count);
    for(i=0;i<k;++)
    printf("%ld ",C+i);
    printf("%ld\n",D+i);
	return 0; }