#include <stdio.h>
int main() {
	int n1,n2,p[20],q[20],i,j=0,flag=0,count=0;
	scanf("%d",&n1);
	for(i=0;i<n1;i++){
	    scanf("%d",&p[i]); }
	scanf("%d",&n2);
	for(i=0;i<n2;i++){
	    scanf("%d",&q[i]); }
	for(i=0;i<n1;i++){
	    if(p[i]==q[j]){
	        flag=i;
	        break; } }
	j=1;
	for(i=flag+1;i<flag+n2;i++){
	    if(p[i]==q[j]){
	        j++; } }
	j=n2 ? printf("YES"):printf("NO");
	    return 0; }