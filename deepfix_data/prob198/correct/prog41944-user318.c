#include <stdio.h>
#include <stdlib.h>
int min(int a,int b){
    if(a<b)return a;
    else return b;}
int max(int c,int d){
    if(c>d)return c;
    else return d; }
int main() {
int n1,n2,a,b,c,i,j=0,k,l;
scanf("%d",&n1);
int z[n1];
for(a=0;a<n1;a++)scanf("%d\n",&z[a]);
scanf("%d",&n2);
int s[n2];
for(b=0;b<n2;b++)scanf("%d\n",&s[b]);
 int m=z[0];
 int n=z[0];
 for(k=0;k<n1;k++)n=max(n,z[k]);
for(l=0;l<n1;l++){ for(c=0;c<n1;c++)m=min(m,z[c]);
 for(i=0;i<n2;i++){
     if(m==s[i]){
         j=j+1;
         s[i]=n; } }
 if(j==0){printf("%d",m);
 break;}}
	return 0; }