#include <stdio.h>
int main() {
	int n1,n2,p[20],q[20],i,j,flag=0;
	scanf("%d",&n1);
	for(i=0;i<n1;i++){
	    scanf("%d",&p[i]); }
	scanf("%d",&n2);
	for(i=0;i<n2;i++){
	    scanf("%d",&q[i]); }
	for(i=0;i<n1;i++){
	    for(j=0;j<n2;j++){
	        if(p[i]==q[j])
	        flag++;
	        break; } }
	if(flag==n2){
	    printf("YES"); }
	else{
	    printf("NO"); }
	return 0; }