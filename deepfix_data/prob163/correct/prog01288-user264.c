#include <stdio.h>
#include <stdlib.h>
int pow(int a,int b){
    int i,p=1;
    for(i=0;i<b;i++){
        p=p*a; }
    return p; }
int main() {
       int s1,s2,k=0,l=0,i,j;
       scanf("%d",&s1);
       scanf("%d",&s2);
       char a[s1],b[s2];
       for(i=0;i<s1;i++){
           scanf("%c",&a[i]); }
        for(j=0;j<s2;j++){
           scanf("%c",&b[j]); }
       for(i=0;i<s1;i++){
            k=k+pow(10,s1-i-1)*a[i]; }
       for(j=0;j<s2;j++){
           l=l+pow(10,s2-j-1)*b[j]; }
         printf("%d",k+l);
	return 0; }