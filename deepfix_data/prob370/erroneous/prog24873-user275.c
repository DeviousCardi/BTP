#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a>=c)&&(a>=b)){
        if ((b+c)>a){
            if (b*b+c*c>=a*a){
                printf("ACUTE"); }
            else if (b*b+c*c==a*a){
                printf("RIGHT"); }
            else {
                printf("OBTUSE"); } }
        else{
        printf("INVALID"); }
    if ((b>=c)&&(b>=a)){
        if ((a+c)>b){
            if (a*a+c*c>=b*b){
                printf("ACUTE"); }
            else if (a*a+c*c==b*b){
                printf("RIGHT"); }
            else {
                printf("OBTUSE"); } }
        else{
        printf("INVALID"); }
    if ((c>=a)&&(c>=b)){
        if ((b+a)>c){
            if (b*b+a*a>=c*c){
                printf("ACUTE"); }
            else if (b*b+a*a==c*c){
                printf("RIGHT"); }
            else {
                printf("OBTUSE"); } }
        else{
        printf("INVALID"); } }
    return 0;
'}'