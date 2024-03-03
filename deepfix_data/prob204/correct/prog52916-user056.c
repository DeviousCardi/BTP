#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
	char ch[10];
	char c;
	int i,j;
	c=getchar();
	int num=0;
	while(c!=EOF&&num<10) {
	    ch[num]=c;
	    num++;
	    c=getchar(); }
	int count=0;
	int h=strlen(ch);
	int k;
	if(h%2==0)
	k=h/2;
	else
	k=(h-1)/2;
	for(i=h;i>k;i--) {
	    for(j=0;j<k;j++) {
	        if (ch[i]==ch[j])
	        count++;
	}}
	if(count!=k)
	printf("YES");
	else
	printf("NO");
	return 0; }