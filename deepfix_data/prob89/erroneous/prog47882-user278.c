#include <stdio.h>
int main(){
int ln,n,i,j,k,a=0;
int ser[100];
scanf("%d\n%d\n",&ln,&n);
for(i=0;i<n;i++) {
    scanf("%d",&ser[i]); }
ser[i]='\0';
for(j=0;j<;j++) {
    for(k=j+1;k<i;k++) {
        if(ser[j]+ser[k]==ln) {
            printf("lucky");
            a=1; } } }
if(a=0){
    printf("unlucky"); }
    return 0; }