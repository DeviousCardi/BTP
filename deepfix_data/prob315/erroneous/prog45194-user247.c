#include <stdio.h>
#include <stdlib.h>
int main() {
    int x[1000],i,n,j,sum=0,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {scanf("%d",&x[i]);}
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(x[i]>x[j])
            sum=sum+1;
            m=m+1 }
        printf("%d\n",m)
        printf("%d ",sum);
        sum=0; }
	return 0; }