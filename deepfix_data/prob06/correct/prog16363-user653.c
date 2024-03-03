#include <stdio.h>
#include <stdlib.h>
int main() {
    long int i,start=1,k=0,j;
    long int n,m,x,y;
	scanf("%ld %ld %ld %ld",&n,&m,&x,&y);
	long int a[n+1];
	for(i=1;i<=n;i++) scanf("%ld",a+i);
	long int b[m+1];
	for(i=1;i<=m;i++) scanf("%ld",b+i);
	long int arr[m][2];
	for(i=1;i<=m;i++){
	    for(j=start;j<=n;j++){
	        if(*(b+i)>=*(a+j)-x && *(b+i)<=*(a+j)+y){
	            *(*(arr+k)+0)=j;*(*(arr+k)+1)=i;
	            k++;
	            break; } }
	    start=j+1;
	    if(start==n+1) break; }
	printf("%ld\n",k);
	for(i=0;i<k;i++) printf("%ld %ld\n",*(*(arr+i)+0),*(*(arr+i)+1));
	return 0; }