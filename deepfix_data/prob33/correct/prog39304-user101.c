#include <stdio.h>
int main() {
int h,p,i;
scanf("%d",&h);
scanf("%d",&p);
int a[p];
for(i=0;i<p;i++){
    scanf("%d",&a[i]); }
for(i=0;i<p-1;i++){
    if(a[i]>a[i+1]){
        h= (h-(a[i]-a[i-1])); } }
if(h>0)
    printf("Yes");
else if(h<0)
    printf("No");
    return 0; }