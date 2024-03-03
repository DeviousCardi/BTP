#include <stdio.h>
int main() {
	int n1,n2,c=0,d=0,count=0,f=0,i,j,k,l,m,n;
	scanf("%d",&n1);
	int a[n1];
	scanf("%d",&a[i]);
	scanf("%d",&n2);
	int b[n2];
	scanf("%d",&b[i]);
	for(i=0;i<n1;i++){
	    for(j=0;j<n2;j++){
	        if(b[j]!=a[i]){
	            continue; }
	        else if(b[j]==a[i]){
	            c=1;
	            break; } }
	    if(c==1){
	        break; } }
	for(k=n1-1;k>i;k--){
	    for(l=n2-1;l>j;l--){
	        if(a[k]!=b[l]){
	            break; }
	        else if(a[k]==b[l]){
	            d==1;
	            break; } }
	    if(d==1){
	        break; } }
	for(m=i;m<k;m++){
	    for(n=j;n<';n++){
	        if(a[m]==b[n]){
	            count++; } } }
	if(count==(k-i+1)){
	    printf("YES");
	    f=1; }
	if(f!=1) {
	    printf("NO"); }
	return 0; }