#include <stdio.h>
#include <stdlib.h>
void merge (int a[],int b[],int c[]){
    int i=0,j=0,k=0;
    while(k!=15){
    if(a[i]<b[j]){c[k]=a[i];i++;k++;}
    else {c[k]=b[j];j++;k++;} } }
int main() {
int a[10],b[5],c[15],i,j,k;
for(i=0;i<10;i++){
    scanf("%d",&a[i]); }
for(i=0;i<5;i++){
    scanf("%d",&b[i]); }
merge(a,b,c);
for(i=0;i<15;i++)
printf("%d\n",c[i]);
	return 0; }