#include <stdio.h>
#include <stdlib.h>
int main() {
	int s1,s2,i;
	char a[501],b[501],res[501];
	scanf("%d%d",&s1,&s2);
	for(i=0;i<501;i++){
	    a[i]=0;
	    b[i]=0;
	    res[i]=0; }
	for(i=s1-1;i>=0;i--){
	     c=getchar();
	     if(c=='\n')break;
	     else a[i]=c; }
	for(i=s2-1;i>=0;i--){
	    c=getchar();
	    if(c=='\n')break;
	    else b[i]=c; }
	for(i=0;i<501;i++){
	    printf("%c%c",a[i],b[i]);
	    if(a[i]+b[i]-2*'0'<=9)res[i]=a[i]+b[i]-'0';
	    else {
	    res[i]=a[i]+b[i]-'0'-10;
	    a[i+1]=a[i+1]+1; } }
	for(i=500;i>=0;i--){ }
	return 0; }