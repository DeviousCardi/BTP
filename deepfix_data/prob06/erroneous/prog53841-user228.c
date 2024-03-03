#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n,m;
	long long int x,y;
	scanf("%ld %ld %lld %lld",&n,&m,&x,&y);
	long long int a[n],b[m];
	long long int i,j,k=0,*(*c+2);
	for(i=0;i<n;i++){
	    scanf("%lld",&a[i]); }
	for(i=0;i<m;i++){
	    scanf("%lld",&b[i]); }
	for(i=0;i<n;i++){
	    for(j=0;j<m;j++){
	        if(b[j]<=(a[i]+y)&&b[j]>=a[i]-x){
	            *(*(c+k)+0)=i+1;
	            *(*(c+k)+1)=j+1;
	            k++;
	            b[j]=-x;
	            break; } } }
	printf("%lld\n",k);
	for(i=0;i<k;i++){
	    printf("%lld %lld\n",*(*(c+k)+0),*(*(c+k)+1)); }
	return 0; }