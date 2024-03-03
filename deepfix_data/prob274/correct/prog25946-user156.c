#include <stdio.h>
int main(){
int n,i,a,e,j;
int x=0;
int count=0;
int m=0;
scanf("%d\n",&n);
int ar[n];
int r[100000];
for(i=0;i<n;i++) {
    scanf("%d",&ar[i]); }
for(i=0;i<n;i++) {
    if(ar[i]==1) {
    a=i;
    x=ar[i];
    break;
}}
while(m==0) {
    a=ar[x];
    x=ar[a];
    count=count+1;
    r[count]=x;
    for(i=0;i<count;i++) {
        for(j=0;j<count;j++) {
            if(r[i]==r[j]) {
                e=r[i];
                break;
                m=1; }
            if(m==1)
            break; } } }
printf("%d",e);
 return 0; }