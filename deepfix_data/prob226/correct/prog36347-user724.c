#include <stdio.h>
int main() {
    int n,d,i,j,l,sum=0,b[20],a[31];
    scanf("%d ",&d);
    scanf("%d\n",&n);
    for(i=0;i<d;i++) {
        scanf("%d",&b[i]); }
    if(n<d){
        printf("%d",b[n]); }
    else{
        for(i=0;i<d;i++){
            a[i]=b[i]; }
        for(j=d;j<=n;j++){
            a[j]=0;
            for(l=d;l>0;l--){
                a[j]=a[j]+a[j-l]; } }
        printf("%d",a[n]); }
	return 0; }