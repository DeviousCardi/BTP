#include <stdio.h>
int main() {
    int i,j,k,l,n1[20],n2[20],n,m,d=0;
    scanf("%d\n",&n);
    for (i=0;i<=n;i=i+1){
        scanf("%d\n",&n1[i]); }
    scanf("%d\n",&m);
    for (j=0;j<=m;j=j+1){
        scanf("%d\n",&n2[j]); }
    for (i=0;i<=n;i=i+1){
        for(j=0;j<=m;j=j+1){
            if (n1[i]==n2[j]){
                d=1;
                break; }
            else if (n1[i]=n2[j]){
                continue; } } }
    if (d==1){
        printf("YES"); }
    else{
        printf("NO"); }
	return 0; }