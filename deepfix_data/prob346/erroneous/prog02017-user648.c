#include <stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d",&a);
    int s[a];
    for(int i=0;i<a;i++)
    scanf("%d",&s[i]);
    for(int i=0;i<a;i++) {
        b=s[i];
        for(int j=i;j<a;j++) {
            if(s[j]<b) {
                b=s[j]; } }
        s[j]=s[i];
        printf("%d ",b); }
    printf("end");
    return 0; }