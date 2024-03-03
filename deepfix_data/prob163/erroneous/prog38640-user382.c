#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[500],b[500],sum[501];
	int sizeofa,sizeofb,ch,i=1;
	scanf("%d%d",&sizeofa,&sizeofb);
	ch=getchar();
	for(i=0;i<500;i++) {
	    a[i]=-1;
	    b[i]=-1;
	    sum[i]=-1; }
	sum[500]=-1;
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
	printf("%c",ch1);
	putchar(ch2);
	return 0; }