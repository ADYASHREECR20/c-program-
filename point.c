#include<stdio.h>
#include<math.h>
struct point {  
    int x; 
    int y; }a,b ;
float distance(struct point a, struct point b){
    int x1 = a.x;
    int x2 = b.x;
    int y1 = a.y;
    int y2 = b.y;
    float d = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
    return d;}
int main(){
    printf("Enter the point 1 as x1 and y1: ");
    scanf("%d", &a.x);
    scanf("%d", &a.y);
    printf("Enter the point 2 as x2 and y2: ");
    scanf("%d", &b.x);
    scanf("%d", &b.y);
    float res = distance(a, b);
    printf("The distance between point 1 (%d, %d) and point 2 (%d, %d) is %.2f",a.x,a.y,b.x,b.y,res);
}
