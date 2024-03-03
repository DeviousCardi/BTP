#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int min(int a, int b){
    if(a<b)return a;
    else return b; }
int main() {
	int n1, n2, i, j=0;
	scanf("%d\n%d\n", &n1, &n2);
	char a[n1], b[n2];
	char ch, x;
	    scanf("%c",&ch);
	    for(i=0;i<n1; i++){
	        a[i]=ch;
	        scanf("%c", &ch); }
	    scanf("%c", &x);
	for(i=0; j<n2; i++){
	    if(x!=' \n'){
	    b[j]=x;
	    j++; }
	    scanf("%c", &x); }
	char sum[n1+n2+1];
	for(i=0; i<min(n1,n2); i++){
	    if(((int)(a[n1-i]+b[n2-i]))/10>1){
	        sum[n1+n2-i-1]=1;}
	        sum[n1+n2-i]=(int)((int)sum[n1+n2-i]+((int)(a[n1-i]+b[n2-i]))%10); }
	    printf("%d", a[1]+b[1]);
	return 0; }