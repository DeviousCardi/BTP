#include <stdio.h>
#include <stdlib.h>
long long int brak(long long int a,long long int b){
    int ans1;
    ans1=a;
    ans2=b;
    return (ans1,ans2); }
int main() {
	long long int i,j,k;
	long long  int n;
	long long int S;
	scanf("%lld",&n);
	long long int a[n];
	    for(i=0;i<n;i++){
	        scanf("%lld",&a[i]); }
	    scanf("%lld",&S);
	    for(j=0;j<n;j++){
	        for(k=0;k<n;k++){
	            if((a[j]+a[k]==S) && (j>k)){
	                printf("%lld %lld",brak(a[k],a[j]));
	            }else
	            break; } }
	return 0; }