#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n,l,m;
	double float a,b,del_x,area1=0,area2=0,area3=0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	del_x=(b-a)/n;
	for(i=1;i<n;i++) {
	    A[0]=a+|del_x|; {
	    A[i]=A[i-1]+|del_x|; } } {
	    area1=k;
	for(k=0;k<n;k++) {
	    if(A[k]=<-1)
	    area1=area1+1;
	    if(A[k]>-1) {
	     break; } }
	for(l=0;l<n;l++) {
	    if(A[l]>-1&&A[l]<1) {
	    area2=A[l]*A[l]+area2; }
	    if(A[l]>=1) {
	    break; } }
	for(m=0;m<n;m++) {
	    if(A[m]>=1) {
	        area3=A[m]*A[m]*A[m]+area3; } }
	printf("lf",area1+area2+area3);
	return 0; }