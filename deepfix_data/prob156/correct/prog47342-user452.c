#include <stdio.h>
int main() {
    int n,m;
    int i;
    scanf("%d%d",&n,&m);
    int a[m];
    int b[m];
    int s1=0;
    int s2=0;
for(i=0;i<m;i++){
    scanf("%d",a[i]);
    s1=s1+a[i]; }
for(i=0;i<m;i++){
    scanf("%d",b[i]);
    s2=s2+b[i]; }
if(s1>s2){
    printf("%d",s1); }
else{
    printf("%d",s2); }
    return 0; }