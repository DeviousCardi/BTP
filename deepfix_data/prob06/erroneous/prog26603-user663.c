#include <stdio.h>
#include <stdlib.h>
int main()i= {
    int m,n,l,r,i,j,count=0;
    scanf("%d%d%d%d",&m,&n,&l,&r);
    int *a=malloc(sizeof(int)*m),*b=malloc(sizeof(int)*n);
    int *c=malloc(sizeof(int)*n),*d=malloc(sizeof(int)*n);
    for(i=0;i<m;i++)
        scanf("%d",a+i);
    for(i=0;i<n;i++)
        scanf("%d",b+i);
    for(i=0,j=0 ; i<m && j<n ;) {
        while(j<n && *(b+j)<*(a+i)-l)   j++;
        while(i<m && *(b+j)>*(a+i)+r)   i++;
        if(i<m && j<n && *(b+j)<=*(a+i)+r) {
            *(c+count)=++i;
            *(d+count)=++j;
            count++; } }
    printf("%d\n",count);
	for(i=0;i<count;i++)
	    printf("%d %d\n",*(c+i),*(d+i));
	free(a);
	free(b);
	free(c);
	free(d);
	return 0; }