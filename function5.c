#include <stdio.h>
//function to calculate area of square
float SquareArea(float side);
float R_Area(float length, float width);
float CircleArea(float radius);

int main() {
	// your code goes here
	/*printf("Enter side length \n");
	float side;
	scanf("%f", &side);
	float area = SquareArea(side);
	printf("Area of square is : %f", area);*/
	
	/*printf("Enter length and width \n");
	float length, width;
	scanf("%f %f", &length, &width);
	float area = R_Area(length, width);
	printf("Area of rectangle is : %f", area);
	return 0;*/
	
	printf("Enter radius of circle \n");
	float radius;
	scanf("%f", &radius);
	float area = CircleArea(radius);
	printf("Area of rectangle is : %f", area);
	return 0;
	

}
float SquareArea(float side){
    return side*side;
}
float R_Area(float length, float width){
    return length*width;
}
float CircleArea(float radius){
    return 3.14*radius;
}