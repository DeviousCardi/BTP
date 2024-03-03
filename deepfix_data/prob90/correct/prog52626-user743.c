#include <stdio.h>
int main(){
int k,n,p=0,q=0;
scanf("%d %d",&k,&n);
int a[n];
for(int i=0;i<n;i++) {
    scanf("%d",&a[i]); }
for(int i=0;i<n;i++) {
    int l=0;
    l=k-i;
    for(int j=0;j<n;j++) {
        if(l==a[j])p=p+1;
        if(i==a[j])q=q+1; }
    if((p!=0)&&(q!=0)){printf("lucky");break;} }
if((p==0)||(q==0)){printf("unlucky");}
    return 0; }