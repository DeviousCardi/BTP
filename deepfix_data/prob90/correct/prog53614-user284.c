#include <stdio.h>
int main(){
    int k,i,t,j;
    int num[1500];
    int n,d,g=0,temp;
    scanf("%d",&k);
    scanf("%d",&n);
   if(k<=499&&k>=0) {
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
    for(i=0;i<n-1;i++) {
        for(j=0;j<n-1;j++) {
            if(num[i]>num[j]) {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp; } } }
    for(i=0;i<=(k/2);i++) {
        j=k-i;
        for(t=0;t<n;t++) {
            if(num[t]==i) {
                for(d=t;d<n;d++) {
                    if(num[d]==j) {
                        printf("lucky");
                        g=1;
                        break; } } }
                if(g==1) {
                    break; } }
            if(g==1) {
                break; } }
    if(g==0) {
        printf("unlucky"); } }
   else {
       printf("unlucky"); }
    return 0; }