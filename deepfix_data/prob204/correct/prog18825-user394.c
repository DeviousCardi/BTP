#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[100],b[100],i,j,k,count;
	count=0;
	char ch;
	i=0;
	ch=getchar();
	while(ch!=' '){
	    a[i]=ch;
	    ch=getchar();
	    count=count+1;
	    i=i+1; }
	 k=count-1;
	for(j=0;j<k;j++){
	    b[j]=a[k-i]; }
	for(i=0;i<count;i++){
	   printf("%d",b[i]);}
	for(i=0;i<count;i++){
	    if(a[i]!=b[k-i]){
	        printf("NO");
	        return 0;} }
	printf("YES");
	return 0; }