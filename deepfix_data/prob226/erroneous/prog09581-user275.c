#include <stdio.h>
int main() {
    int n,d,a[30],sum;
    scanf("%d%d",&d,&n);
    for(int i=0;i<d;i++){
        scanf("%d",&a[i]); }
    if(n>=d){
        for(int i=d;i<n+1;i++){
            sum=0;
            for(j=d;j>0;j--){
                sum=sum + a[i-j]; }
            a[i]=sum; } }
	printf("%d",a[n]);
	return 0; }