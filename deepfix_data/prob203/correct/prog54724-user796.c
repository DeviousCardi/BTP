#include <stdio.h>
int main() {
int i,j,n,d=0,e=0;
int a[50];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);}
for(i=0;i<n;i++){
for(j=0,j!=i;j<n;j++){
    if(a[i]!=a[j]){
        continue; }
    if(a[i]==a[j]){
       d=1;
    break;}
}break;}
 if(d==1){
printf("yes");}
else if(e==1) {
    printf("no"); }
	return 0; }