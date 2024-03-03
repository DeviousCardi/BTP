#include <stdio.h>
int main() {
int i,j,n,d=0;
int a[50];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++){
for(j=0;j<n&&j!=i;j++){
    if(a[i]==a[j]){
       d=1;
    break;}
}break;}
for(i=0;i<n;i++){
for(j=0;j<n&&j!=i;j++){if(a[i]!=a[j]){
d=2;}}}
 if(d==1){
printf("yes");}
else if(d==2) {
    printf("no"); }
	return 0; }