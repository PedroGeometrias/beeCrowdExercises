// CODE BY pedroGeometrias
// ID -> 1219
#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897

int main(){
    double l1, l2, l3;
    while(scanf("%lf %lf %lf", &l1, &l2, &l3) == 3){
        double semi_perimeter = (l1 + l2 + l3) / 2;
        double triangle_area = sqrt(semi_perimeter* 
                             (semi_perimeter - l1) * 
                             (semi_perimeter - l2) * 
                             (semi_perimeter - l3));
        double radious_incircle = triangle_area / semi_perimeter; 
        double incircle_area = PI * pow(radious_incircle, 2);
        double radious_circumcircle = (l1 * l2 * l3) / (4.0 * triangle_area);
        double circumcircle_area = pow(radious_circumcircle, 2) * PI;
    printf("%.4lf %.4lf %.4lf\n", circumcircle_area - triangle_area,triangle_area - incircle_area, incircle_area);
    }

    return 0;
}
