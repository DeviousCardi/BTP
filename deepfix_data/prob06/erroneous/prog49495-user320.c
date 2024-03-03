#include<stdio.h>
#include<stdlib.h>
 int main() {
   int i,j,so,vst,ll,up;
   int sosi[123],vssi[232];
   scanf("%d %d %d %d",&so,&vst,&ll,&&up);
   for(i=0;i<so;i++) {
       scanf("%d",&sosi[i]); }
   for(i=0;i<vst;i++) {
       scanf("%d",&vssi[i]); }
   int count=0;
   int z=0;
   int k=0;
   for(i=0;i<so;i++) {
       for(j=k;j<vst;j++) {
           if((sosi[i]>=vssi[j]-ll)&&sosi[i]<=vssi[j]+up) {
               ar1[z]=i;
               ar2[k]=j;
               k++;
               count++;
               z++;
               break; } } }
    printf("%d",count);
   for(i=0;i<count;i++) {
       printf("%d %d\n",ar1[i],ar2[i]); }
   return 0; }