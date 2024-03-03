#include <stdio.h>
#include <stdlib.h>
int main() {
    int i=0,s[500];
    while(i<500){
        scanf("%d",&s1[i]);
        if(s1[i]==EOF)
        break;
        i++ }
     int c=0,j,s[i],value[i],k;
     while(c<=i){
         scanf("%d",&value[c]);
        if(value==EOF)
        break;
        c++ }
     for(j=0;j<i-c;j++){
         s[j]=0; }
     for(k=i-c;k<=i;k++){
         s[k]=value[k-j]; }
     int m,q,s2[500];
     q=0;
     while(q<=i){
         m=s1[q]+s[q];
         if(m>10){
             s2[q]=m%10;
             s2[q-1]=s2[q-1]+1; }
         else s2[q]=m;
         if(m=EOF)
         break; }
     int w;
     for(w=0;w<=q;w++){
         printf("%d",s2[w]); }
    	return 0; }