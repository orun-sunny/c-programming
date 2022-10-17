#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
	double centre_x = 3.0, centre_y = 4.0, radius = 5.0;
	double angle = 0.0, step = 5.0 * PI / 180;
	while(angle < (2 * PI)){
		double origin_x = radius * cos(angle);
		double origin_y = radius * sin(angle);

		double new_x = origin_x + centre_x;
		double new_y = origin_y + centre_y;
		printf("(%lf, %lf)\n", new_x, new_y);

		angle += step;
	}

	return 0;
}
