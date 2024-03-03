#include <stdio.h>
#include <stdlib.h>
int chek(int a[],int b[],int n,int k,int x,int y,int i) {
    int j=0;
    for(j=k;j<n;j++) {
        if( (a[i]-x)<=b[j]  &&  (a[i]+y)>=b[j] )
        return j-k; }
    return 0; }
int main() {
    int m,n,i,x,y,j,k;
    scanf("%d%d%d%d",&m,&n,&x,&y);
    int a[m],b[n],c[m];
    k=0,j=0;
    for(i=0;i<m;i++) {
        c[i]=0; }
    for(i=0;i<m;i++) {
        k = k+chek(a,b,n,k,x,y,i);
        if(k!=0) {
            c[i]= k+1;
            j++; }
        if(k+1==m) {
            break; } }
    printf("%d\n",j);
    for(i=0;i<m;i++) {
        if(c[i]!=0)
            printf("%d %d\n",i+1,c[i]); }
	return 0; }