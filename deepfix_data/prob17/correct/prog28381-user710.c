#include <stdio.h>
int main() {
    int i=0,j=0;
    int n1,n2;
    int p=0,q=0;
    scanf("%d",&n1);
    int a1[n1];
    while(i<n1){
        scanf("%d",&a1[i]);
        i++; }
    scanf("%d",&n2);
    int a2[n2];
    while(j<n2){
        scanf("%d",&a2[j]);
        j++; }
    while(q<n1){
        if(a2[p]==a1[q]){
            p++;q++;
            while(p<n2){
                if(a2[p]==a1[q]){p++;q++;}
                else{printf("NO");break;} } }
        q++;
        if(p>0){break;} }
   if(p==n2){printf("YES");}
    return 0; }