#include <stdio.h>
int main() {
int a,b,c=0,e,i,j,k,n1,n2;
scanf("%d",&n1);
int s[n1];
for(i=0;i<n1;i++)scanf("%d",&s[i]);
scanf("%d",&n2);
int z[n2];
for(j=0;j<n2;j++)scanf("%d",&z[j]);
    k=z[0];
    for(b=0;b<n1-n2;b++){
        if(k==s[b])e=b;}
    for(a=0;a<n2;a++) {
        if(z[i]==s[e+i])c=c+1; }
if(c==n2)printf("YES");
else printf("NO");
	return 0; }