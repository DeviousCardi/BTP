#include <stdio.h>
#include <stdlib.h>
int main() {
    int x[1000],i,n,j,sum=0,m=0,y[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {scanf("%d",&x[i]);}
    for(i=0;i<n;i++){
        for(j=i;j<n-1;j++){
            if(x[i]>x[j+1])
            {    sum=sum+1;
                 m=m+1; } }
        y[i]=sum;
        sum=0;
    }printf("%d \n",m);
     for(i=0;i<n;i++){
         printf("%d ",y[i]); }
	return 0; }