#include <stdio.h>
int max(int a,int b) {
    if(a>=b)
    return a;
    else
    return b; }
int min(int a,int b) {
    if(a>=b)
    return b;
    else
    return a; }
int main() {
	int n1,n2,i,j,a[1000],k,z,p,c=0,b[10000],l;
	scanf("%d",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&n2);
	for(j=0;j<n2;j++) {
	    scanf("%d",&b[j]); }
	z=max(n1,n2);
	p=min(n1,n2);
	    for(k=0;k<=z;k++) {
	        if(a[k]==b[0])
	        break; }
	    for(l=k;l<z;l++) {
	        if(a[l]==b[l-k])
	        c=c+1; }
	    if(c==p)
	    printf("YES");
	    else
	    printf("NO");
	return 0; }