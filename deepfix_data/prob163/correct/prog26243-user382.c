#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[500],b[500],sum[501];
	int sizeofa,sizeofb,ch,i=1,carry,temp;
	scanf("%d%d",&sizeofa,&sizeofb);
	ch=getchar();
	for(i=0;i<500;i++) {
	    ch=getchar();
	    if(ch=='\n')
	        break;
	    a[i]=ch-'0'; }
	for(i=0;i<500;i++) {
	    ch=getchar();
	    if(ch==EOF)
	        break;
	    b[i]=ch-'0'; }
	for(i=0;i<sizeofa || i<sizeofb;i++) {
	    if(i<sizeofa && i<sizeofb) {
	        temp=1; } }
	return 0; }