#include <stdio.h>
int main() {
	int N1,N2,i,j,count;
	int A1[19],A2[19];
	scanf("%d",&N1);
	for(i=0;i<N1;i++){
	    scanf("%d",&A1[i]); }
	scanf("%d",&N2);
	for(i=0;i<N2;i++){
	    scanf("%d",&A2[i]); }
	if(N2>N1)
	printf("NO");
	else{
	    count=-1;
	    for(i=0;i<N2;i++){
	        for(j=0;j<N1;j++){
	            if(A2[i]==A1[j]) count=j; }
	   if(count==-1||N2-i>N1-count) printf("NO");
	   else{
	       while(i<N2&&j<N1){
	           if(A2[i]==A1[j]){
	               j++;
	               i++; }
	           else break; }
	       if(i==N1&&j==N2) printf("YES");
	       else printf("NO"); }
	return 0; }