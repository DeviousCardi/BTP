#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,mo=0,m,i,j,flag=0;
    scanf("%d",&n);
    int arr[n];
	for(i=0;i<n;++i) {
	        scanf("%d",&arr[i]); }
	for(i=0;i<n;++i)
	    { mo=0;
	        for(j=i;arr[j]==arr[i];++j) {
	                mo++; }
	    if(mo>m)
	        m=mo; }
	 int t=0,T=-10001;
	 if(n==m)
	    { T=arr[0];}
	 else
	    {   for(i=0;i<=n-m;++i) {
	                for(j=i;j<m+i-1;++j) {
	                        if(arr[j]!=arr[j+1])
	                            { flag=0; }
	                        else
	                            { flag=1;} }
	                if(flag==1)
	                    { t=arr[i];}
	                if(t>T)
	                    { T=t;} } }
    printf("%d",T);
	return 0; }