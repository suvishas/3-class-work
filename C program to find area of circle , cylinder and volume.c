#include<stdio.h>
struct shape{
	float height;
	float radius;
	float area1;
	float area2;
	float volume;
};
int main () {
	float pi;
	pi=3.14;
	struct shape shape;
	 printf("Enter radius of the circle : ");
    scanf("%f", &shape.radius);
    printf("Enter height of the cylinder : ");
    scanf("%f", &shape.height);
    shape.area1=pi*shape.radius*shape.radius;
    shape.area2=2*pi*shape.radius*(shape.height+shape.radius);
    shape.volume=pi*shape.radius*shape.radius*shape.height;
    printf("Area of the circle : %f \n",shape.area1);
	 printf("Area of the cylinder : %f \n",shape.area2);
	  printf("volume of the cylinder : %f \n",shape.volume);
}

