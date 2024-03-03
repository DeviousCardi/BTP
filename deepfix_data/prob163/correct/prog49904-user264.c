#include <stdio.h>
#include <stdlib.h>
int power(int a,int b){
    int i,p=1;
    for(i=0;i<b;i++){
        p=p*a; }
    return p; }
int main() {
       int s1,s2,k=0,l=0,i,j;
       scanf("%d",&s1);
       scanf("%d",&s2);
       int a[500],b[500];
       for(i=0;i<s1;i++){
           scanf("%d",&a[i]);printf("H"); }
           scanf("\n");
        for(j=0;j<s2;j++){
           scanf("%c",&b[j]);printf("$"); }
       for(i=0;i<s1;i++){
            k=k+power(10,s1-i-1)*a[i];printf("#"); }
       for(j=0;j<s2;j++){
           l=l+power(10,s2-j-1)*b[j];printf("@"); }
         printf("%d",k+l);
	return 0; }