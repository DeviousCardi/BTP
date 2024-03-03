#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,i,j=0,count=0,k=0,x,y;
    int *a,*b,*c,*d;
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(m*sizeof(int));
    c=(int*)malloc(m*sizeof(int));
    d=(int*)malloc(m*sizeof(int));
    for(i=0;i<n;i++)
     scanf("%d",(a+i));
    for(i=0;i<m;i++)
        scanf("%d",(b+i));
        if(n!=0&&m!=0){
            for(i=0;i<n;i++) {
                if(*(a+i)-x<=*(b+j) && *(b+j)<=*(a+i)+y) {
                    *(c+k)=i+1;
                    *(d+k)=j+1;
                    k++;
                    count++;
                    j++; } } }
printf("%d\n",count);
for(i=0;i<k;i++)
printf("%d %d\n",*(c+i),*(d+i));
free(c);
free(d);
	return 0; }