#include <stdio.h>
#include <stdlib.h>
int carry(int p){
    if(p<9){return 0;}
    if(p>9){return (p/10);} }
int main() {
    int n,m,i,j,a[i],b[i],c[i];
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++){
        scanf("%d",a[i]); }
    for(j=0;j<m;j++){
        scanf("%d",&b[j]); }
    for(i=1;i<n;i++){
        p=a[n-i]+b[m-i];
        if(p>9){p=p%10;}
        c[n-i]=p+carry(p); }
    for(i=0;i<20;i++){
        print("%d",c[i]); }
	return 0; }