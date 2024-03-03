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
                break; }
             else continue; } } }
for(i=n-1;i>0;i=i-1) {
     if(s[i]!=n){MN=n;}
     else{MN=i-1; } }
 printf("%d\n",RN);
 printf("%d",MN);
    return 0; }