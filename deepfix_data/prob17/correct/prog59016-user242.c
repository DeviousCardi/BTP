#include <stdio.h>
int main() {
	int n1,n2,i,j,M,N,flag=0;
	scanf("%d",&n1);
	scanf("%d",&n2);
	int a1[n1],a2[n2];
	if(n2>n1) printf("NO");
	else{
	    for(i=0;i<n1;i++){
	        scanf(" %d",&M);
	        a1[i]=M; }
	    for(j=0;j<n2;j++){
	        scanf(" %d",&N);
	        a2[j]=N; }
	    for(j=0;j<n2;j++){
	        for(i=0;i<n1;i++){
	            if(a2[j]==a1[i]){break;}
	            else printf("NO"); }
	        for(j=j+1;j<n2;j++){
	           if(a2[j]==a1[i+1]){
	           while(a2[j]==a1[i+1]){flag=flag+1;i++;} }
	           else printf("NO"); } } }
	if(flag==n2) printf("YES");
	return 0; }