#include <stdio.h>
#include <stdlib.h>
int power(int a,int b){
    int i,p=1;
    for(i=0;i<b;i++)
        p=p*a;
    return p; }
int main() {
       int s1,s2,k=0,l=0,i,j;
       scanf("%d\n",&s1);
       scanf("%d\n",&s2);
       char a[500],b[500];
       for(i=0;i<s1;i++){
           scanf("%c",&a[i]);printf("%c\n",a[i]); }
           scanf("\n");
        for(j=0;j<s2;j++){
           scanf("%c",&b[j]); }
       for(i=0;i<s1;i++){
            k=k+power(10,s1-i-1)*a[i];
           }printf("%d\n",k);
       for(j=0;j<s2;j++){
           l=l+power(10,s2-j-1)*b[j];
           }printf("%d\n",l);
         printf("%d",k+l);
	return 0; }