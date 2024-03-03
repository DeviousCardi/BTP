#include <stdio.h>
int main() {
	int N1,N2;
	int a[N1],b[N2];
	scanf("%d\n",&N1);
	for(i=0;i<N1;i++){
	    scanf("%d ",&a[i]);
	    printf("\n"); }
	scanf("%d\n",&N2);
	if(N2>N1){
	    printf("NO");
	    exit(0); }
	for(i=0;i<N2;i++){
	    scanf("%d ",&b[i]); }
	    for(j=0;j<N1;j++){
	        if(b[0]==a[j]){
	            count=count+j;
	       break;
	        }}
	  if((count==0)||((N1-j)<N2)){     printf("NO");
	    exit(0);}
	   else if{
	       for(i=0;i<N2;i++){
	           if(b[i]=a[count+i]){
	               num=num+1; } } } }
	if(num==N2){printf("YES");}
	else{printf("NO");}
	return 0; }