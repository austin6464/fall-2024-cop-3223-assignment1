#include <math.h>
#include <stdio.h>

//A distance fuction for calculations 

double distance(int x1, int x2, int y1, int y2){
    double result = sqrt(((x2 - x1)*(x2 - x1))+((y2 - y1)*(y2 - y1)));
}

//A width fucntion for calculations

double width(int x1, int x2){
    double result = (x2 - x1);
}
//A height function for calculations

double height(int y1, int y2){
    double result = (y2 - y1);
}
//calculateDistance function

double calculateDistance()
{
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
    printf("enter the first point (x,y).\n");
    scanf(" %d%d", &x1 ,&y1);
    printf("enter the second point (x,y).\n");
    scanf(" %d%d", &x2, &y2);
    double the_distance = distance(x1,x2,y1,y2);
    printf("the distance is %lf \n", the_distance);
}

//calculatePerimeter function

double calculatePerimeter(){
    #define PI 3.14159
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
    printf("enter the first point (x,y).\n");
    scanf(" %d%d", &x1 ,&y1);
    printf("enter the second point (x,y).\n");
    scanf(" %d%d", &x2, &y2);
    double diameter = distance(x1,x2,y1,y2);
    double perimeter = (diameter)*PI;
    printf("The perimeter of the city encompassed by your request is %lf \n", perimeter);
    return 0;
}

//Area function

double calculateArea(){
    #define PI 3.14159
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
    printf("enter the first point (x,y).\n");
    scanf(" %d%d", &x1 ,&y1);
    printf("enter the second point (x,y).\n");
    scanf(" %d%d", &x2, &y2);
    double radius = (0.5)*((distance(x1,x2,y1,y2)));
    double area = (PI)*((radius)*(radius));
    printf("The area of the city encompassed by your request is %lf \n", area);
    return 0;
}

//Width function

double calculateWidth(){
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
    printf("enter the first point (x,y).\n");
    scanf(" %d%d", &x1 ,&y1);
    printf("enter the second point (x,y).\n");
    scanf(" %d%d", &x2, &y2);
    double the_width = width(x1, x2);
    printf("The width of the city encompassed by your request is %lf \n", the_width);
    return 0;
}

//Height function

double calculateHeight(){
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
    printf("enter the first point (x,y).\n");
    scanf(" %d%d", &x1 ,&y1);
    printf("enter the second point (x,y).\n");
    scanf(" %d%d", &x2, &y2);
    double the_height = height(y1, y2);
    printf("The height of the city encompassed by your request is %lf \n", the_height);
    return 0;
}

//Main function

int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}