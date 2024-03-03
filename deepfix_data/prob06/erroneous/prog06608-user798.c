#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,count=0;
    int *a,*b;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&x);
    scanf("%d\n",&y);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(m*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d \n",(a+i))
    for(i=0;i<m;i++)
        scanf("%d \n",(b+i))
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(a[i]-x<=b[j]<=a[i]+y)
                count=count+1;
    printf("%d\n",count)
	return 0; }