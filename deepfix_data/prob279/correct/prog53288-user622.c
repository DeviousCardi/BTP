#include <stdio.h>
int main() {
int n,i,j,num,RN,MN;
int s[n];
scanf("%d",&n);
for(i=0;i<n;i++) {
    scanf("%d",&s[i]);
    s[0]=1;
    num=1;
    for(j=1;j<n;j++) {
            if(s[j]!=num+1)
            { if(s[j]<num+1){
                RN=num;
                printf("%d\n",RN);
                break; }
              else printf("%d",n); } } }
for(i=0;i<n;i++) {
     if(s[i]==i+1) {
            continue; }
     else {MN=i+1;} }
 printf("%d",MN);
    return 0; }