#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    int r;
if( n==0 || n==1)
return 1;
else
r = cat(n-1)*((2*n-2)*(2*n-3))/(n*(n-1));
    return r; }
int main() {
    int t,a[t-1],i,j,sum=0;
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
        {scanf("%d\n",&a[i]);
        printf("%d\n",a[i]);}
     for(j=1;j<=a[i];j++)
            {sum=sum+cat(j);
            i++; }
         printf("%d\n",sum);
	return 0; }