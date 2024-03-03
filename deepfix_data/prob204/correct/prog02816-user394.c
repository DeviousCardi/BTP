#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[100],b[100],i,j,k,count;
	count=0;
	char ch;
	ch=getchar();
	for(i=0;i<100;i++){
	    if(ch==' '){break;}
	    a[i]=ch;
	    ch=getchar();
	    count++; }
	 k=count-1;
	for(j=0;j<k;j++){
	    b[j]=a[k-i]; }
	for(i=0;i<count;i++){
	   printf("%d",b[i]);}
	for(i=0;i<count;i++){
	    if(a[i]!=b[i]){
	        printf("NO");
	        return 0;} }
	printf("YES");
	return 0; }