#include <stdio.h>
int main(){
    int a1,b1,a2,b2,a3,b3;
    scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&a3,&b3);
    if(a1<a2&&b1<b2){
        if(a1<a3&&a3<a2&&b1<b3&&b3<b2){
            printf("Point is inside the rectangle."); }
        else if((a3<a1||a3>a1||b3<b1||b3>b2)||
        (b3==b1&&(a3<a1||a3>a2))||(b3==b2&&(a3<a1||a3>a2))||
        (a3==a1&&(b3<b1||b3>b2))||(a3==a2&&(b3<b1||b3>b2))) {
         printf("Point is outsihgfhgfde the rectangle."); }
        else {
            printf("Point is on the rectangle."); } }
    else if(a1>a2&&b1>b2){
        if(a2<a3<a1&&b2<b3<b1) {
            printf("Point is inside the rectangle."); }
        else if((a3<a2||a3>a1||b3<b2||b3>b1)||
            (b3==b2&&(a3<a2||a3>a1))||(b3==b1&&(a3<a2||a3>a1))||
            (a3==a2&&(b3<b2||b3>b1))||(a3==a1&&(b3<b2||b3>b1))){
         printf("Point is outside the rectangle."); }
        else{printf("Point is on the rectangle.");    } }
	return 0; }