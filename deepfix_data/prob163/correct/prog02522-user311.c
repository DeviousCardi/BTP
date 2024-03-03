#include <stdio.h>
#include <stdlib.h>
int max(int,int);
int main() {
	int n1,n2,i;
	char a[1000],b[1000],res[1000];
	scanf("%d",&n1);
	scanf("%d",&n2);
	if(n1>=n2){
	    for(i=0;i<n1-n2-1;i++)
	    b[i]='0';
	    for(i=n1-n2;i<n1;i++)
	    scanf("%c",&b[i]); }
	if(n1<n2){
	    for(i=0;i<n2-n1-1;i++)
	    a[i]='0';
	    for( i=n2-n1 ; i<n2 ; i++ )
	    scanf("%c",&a[i]); }
	for(i=max(n1,n2)-1;i>=0;i--) {
	    res[i]= a[i]+ b[i];
	    if(res[i]>'9') {
	        res[i]=res[i]-'9'-1;
	        b[i-1]=b[i-1]+1; } }
	for(i=0;i<max(n1,n2);i++) {
	    printf("%c",res[i]); }
	return 0; }
int max (int x,int y){
    if(x>y)
    return x;
    else
    return y; }