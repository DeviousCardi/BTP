#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b>c)||(b+c>a)||(c+a>b)){
        if ((a>b)&&(a>c)){
            if (b*b+c*c>a*a){
                printf("OBTUSE"); } } }
    else{
        printf("INVALID"); }
    return 0; }