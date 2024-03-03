#include <stdio.h>
#include <stdlib.h>
int calcatlan(int n){
    if(n==0)
    return 1;
    else
    return (2.0*((2*n)-1)/(n+1))*calcatlan(n-1); }
int smlcatlan(int m){
    int j=0;
    if(m<0)
    return 0;
    while(m>calcatlan(j)){
        j++; }
    return calcatlan(j-1); }
int main() {
    int n,temp[100],j;
	scanf("%d\n",&n);
	for(j=0;j<n;j++){
	    scanf("%d\n",&temp[j]);
	    printf("%d\n",smlcatlan(temp[j])); }
	for(j=0;j<n;j++){ }
	return 0; }