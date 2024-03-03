#include<stdio.h>
int main() {
    int a,b,c;
    int max,s1,s2;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c) {max=a; s1=b; s2=c;}
        else {max=c; s1=a; s2=b;} }
    else{
        if(b>c) {max=b; s1=a; s2=b;}
        else {max=c; s1=a; s2=b;} }
    if(a+b>c&&b+c>a&&a+c>b){
        if(max*max==s1*s1+s2*s2)
        printf("RIGHT");
        else if(max*max>s1*s1+s2*s2)
        printf("OBTUSE");
        else
        printf("ACUTE"); }
    else printf("INVALID");
    printf("\n%d",max);
    return 0; }