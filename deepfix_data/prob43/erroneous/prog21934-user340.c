#include <stdio.h>
#include <stdlib.h>
int mod(int i){
    if(i<0){
        return -i; }
    else{
        return i; } }
int main() {
	int n,i,j;
	double a,b,lx,x[100],f[100],g[100],area,tot_area;
	scanf("%lf%lf",&a,&b);
	scanf("%d",&n);
	lx=(b-a)/n;
	x[0]=a;
	x[n]=b;
	for(i=1;i<n;i++){
	    x[i]=x[0]+lx; } }
	for(j=0;j<n;j++){
	    f[j]=-(x[j]*x[j])+(3*x[j]);
	    g[j]=(2*x[j]*x[j]*x[j])-(x[j]*x[j])-(5*x[j]);
	    area=mod(f[j]-g[j])*lx;
	    tot_area=tot_area+area; }
	printf("%.4lf",tot_area);
	return 0; }