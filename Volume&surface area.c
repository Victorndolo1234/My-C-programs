/* NAME:Victor Ndolo
   REGNO:CT101/G/26520/25
   Program for calculating volume and surface area of a cylinder
 */
#include <stdio.h>

int main() {
    float radius,height,volume,surface_area;
    const float PI = 3.142;
    printf("Enter cylinder's radius: ");
    scanf("%f", &radius);
    
    printf("Enter cylinder's height: ");
    scanf("%f", &height);
    
     volume = PI* radius * radius * height;
     surface_area = 2*PI*radius*radius + 2*PI*radius*height;
    
    printf("\nCylinder's volume is %.3f cubic metres.\n", volume);
    printf("Cylinders surface area is %.3f square metres.\n", surface_area);

    return 0;
}