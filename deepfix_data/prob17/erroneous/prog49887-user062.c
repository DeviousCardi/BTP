#include <stdio.h>
int main() {
    int i,j,m,n,x=0,y=0;
    scanf("%d",&m);
    int a[m];
    for(i=0;i<m;i++){
        scanf("%d",&a[i]); }
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d",&b[i]); }
    for(i=0;i<m;i++){
        if (a[i]==b[0]){
            for(j=0;j<n;j++{
             if(a[i+j]==b[j]){
                 x++; } }
            if(x==n-1){
                y++; } } }
	return 0; }