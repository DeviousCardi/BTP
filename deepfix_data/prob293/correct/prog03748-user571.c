#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c;
    int s1,s2,s3;
    int f=10;
    scanf("%d%d%d",&a,&b,&c);
    if(((a+b)>c)&&((b+c)>a)&&(c+a)>b) {
        if(a>b) {
               s1=a;
               s2=b;
               f=1;}
        else {
               s1=b;
               s2=a;
               f=2; }
        if(c>s1) {
               if(f==1) {
                    s1=c;
                    s2=a;
                    s3=b; }
                if(f==2) {
                    s1=c;
                    s2=b;
                    s3=a; } }
         else {
             s3=c; }
         if((s2*s2+s3*s3)>=(s1*s1)) {
            printf("Not Obtuse Triangle"); }
         else {
             printf("Obtuse Triangle"); } }
    else {
        printf("Cannot form a Triangle"); }
	return 0; }