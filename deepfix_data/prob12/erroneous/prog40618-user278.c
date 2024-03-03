#include <stdio.h>
int main(){
int n,i,j,k,l,,min,,var=0;
int num[200],dist[200];
scanf("%d\n",&n);
for(i=0;i<(2*n);i++) {
    scanf("%d",&num[i]); }
 num[i]='\0';
 for(j=0;j<i;j++) {
    for(k=j+1;k<i;k++) {
            if(num[j]==num[k]) {
            dist[j]=k-j;
            var=1; } }
    if(var==0) {
            num[j]=0; }
    var=0; }
min=i;
for(l=0;l<i;l++) {
    if(dist[l]<min&&dist[l]!=0) {
        min=dist[l]; } }
printf("%d",min);
    return 0; }