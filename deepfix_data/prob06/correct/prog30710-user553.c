#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,s,v,l,u;
	int ss[131],vs[131],a1[111],a2[212];
	scanf("%d%d%d%d",&s,&v,&l,&u);
	for(i=0;i<s;i++) {
	    scanf("%d",&ss[i]); }
	for(i=0;i<v;i++) {
	    scanf("%d",&vs[i]); }
	int count=0;
	int x=0,y=0;
	for(i=0;i<s;i++) {
	    for(j=0;j<v;j++) {
	        if((ss[i]>=vs[j]-l)&&(ss[i]<=vs[j]+u)) {
	            a1[x]=i-1;
	            a2[y]=j-1;
	            y++;
	            count++;
	            x++;
	            break; } } }
	printf("%d\n",count);
	for(i=0;i<count;i++) {
	    printf("%d %d\n",a1[i],a2[i]); }
	return 0; }