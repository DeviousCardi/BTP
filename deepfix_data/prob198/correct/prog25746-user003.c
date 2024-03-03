#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,i,j,t;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d\n",&a[i]); }
    scanf("%d\n",&m);
    int b[m];
    for(i=0;i<m;i++){
        scanf("%d\n",&b[m]); }
    t=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]>a[j]){
                a[i]=t;
                a[j]=a[i];
                a[i]=a[j]; } } }
    int flag=0;
    for(i=0;i<m;i++){
        if(a[0]==b[i]){
            flag++;
            break; } }
    if(flag!=0)printf("NO");
    else{printf("%d",a[0]);}
	return 0; }