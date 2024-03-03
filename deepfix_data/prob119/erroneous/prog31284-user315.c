#include <stdio.h>
#include <stdlib.h>
void nom(int nod,char a,char c,char b){
    if(nod>1){
        nom(nod,a,c,b)=nom(nod-1,a,b,c)+1+nom(nod-1,b,c,a); }
    if(nod=1) {nom(nod,a,c,b)=1};
    printf("%d\n",nom(nod,a,c,b)); }
int main() {
	int k,t,i;
	scanf("%d",&t);
	scanf("%d",&k);
	for(i=0;i<t;i++){
	   nom(k,a,c,b); }
	return 0; }