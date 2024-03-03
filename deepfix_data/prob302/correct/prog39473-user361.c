#include <stdio.h>
int main() {
    int x1,x2,x3,y1,y2,y3;
    scanf("%d%d %d%d %d%d",&x1,&y2,&x2,&y2,&x3,&y3);
    if(x1<x2){
        if(x2<x3){
            if(y1<y2){
                if(y2<y3){
                    printf("Point is inside the rectangle"); }
                else{
                    printf("Point is outside the rectangle"); } }
            else{
                if(y3<y2){
                    printf("Point is inside the rectangle"); }
                else{
                    printf("point is outside the rectangle"); } } }
        else{
            printf("point is outside the rectangle"); } }
    else{
        if(x2>x3){if(y1<y2){
                if(y2<y3){
                    printf("Point is inside the rectangle"); }
                else{
                    printf("Point is outside the rectangle"); } }
            else{
                if(y3<y2){
                    printf("Point is inside the rectangle"); }
                else{
                    printf("point is outside the rectangle"); } } } }
       return 0; }