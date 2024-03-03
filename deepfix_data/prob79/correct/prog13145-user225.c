#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,x,n,y,k,j,f,sum;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	sum=0;
	for(i=0;i<n;i++)
	    sum=sum+a[i];
	printf("%d\n",sum);
	k=a[0];
	j=a[n-1];
	y=1;
	x=1;
	if(n==1|| n==2)
	    printf("1 0");
	else
    {while(y<n-1 && x<n-1) {
        if(k>=j&& k+j!=sum)
         {   j=j+a[n-1-x];
            x++;    }
        else {
            k=k+a[y];
            y++; }
         if(k+j==sum) {
            f=y;
            break; } }
	printf("%d %d",f,n-f);}
	return 0; }