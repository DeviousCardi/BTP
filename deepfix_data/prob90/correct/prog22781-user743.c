#include <stdio.h>
int main(){
int k,n,p=0,q=0;
scanf("%d %d",&k,&n);
int a[n];
for(int i=0;i<500;i++) {
scanf("%d",&a[i]); }
for(int i=0;i<500;i++) {
    int l=0;
    l=k-i;
    for(int j=0;j<500;j++) {
        if(l==a[j])p=p+1;
        if(i==a[j])q=q+1; }
    if((p!=0)&&(q!=0)){printf("lucky");break;} }
if((p==0)||(q==0)){printf("unlucky");}
    return 0; }