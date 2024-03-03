#include <stdio.h>
#include <stdlib.h>
void swap(int x,int y){
    int z=x;
    x=y;
    y=z; }
int main() {
	int a1,b1,i,a[600],b[600],sum[600];
	char ch,ch1;
	scanf("%d\n",&a1);
	scanf("%d\n",&b1);
	if(a1<b1)
	swap(a1,b1);
	for(i=a1;i>0;i--){
	    ch=getchar();
	    a[i]=ch-'0';
	    ch=getchar(); }
	ch1=getchar();
	for(i=b1;i>0;i--){
	    ch=getchar();
	    b[i]=ch-'0';
	    ch=getchar(); }
	for(i=b1+1;i<=a1;i++){
	    b[i]=0; }
	for(i=1;i<=a1;i++){
	    sum[i]=a[i]+b[i];
	    sum[i]=(sum[i]%10)+(sum[i-1]/10); }
	for(i=a1;i>0;i--){
	    printf("%d",sum[i]); }
	return 0; }