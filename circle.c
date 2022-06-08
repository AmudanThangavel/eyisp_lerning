#include <stdio.h>
#define PI 3.1416

int main(){

	int radius;
	float area, circumference;

    //get radius as input
	printf("Enter radius of the circle: ");
	scanf("%d", &radius);

    //compute area and print
	area = PI * radius * radius;
	printf("Area of the circle = %0.3f \n", area);

    //compute circumference and print
	circumference = 2 * PI * radius;
    printf("Circumference of the circle = %0.3f \n", circumference);

	return 0;
}

