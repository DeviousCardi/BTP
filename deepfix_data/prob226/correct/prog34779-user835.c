#include <stdio.h>
int chutiyap(int d,int n) {
    int sum=0;
    int a[30],b[30];
    scanf("%d",&d);
    for(int i=0;i<d;i++) {
        scanf("%d",&b[i]);
        a[i]=b[i]; }
    if(n==0) {
        return (a[0]); }
    if(n>0) {
        for(int j=0;j<d;j++) {
            sum=sum+a[j]; }
        return (sum); } }
int main() {
    int d,n,h;
	scanf("%d %d",&d,&n);
	h=chutiyap(d,n);
	printf("%d\n",h);
	return 0; }