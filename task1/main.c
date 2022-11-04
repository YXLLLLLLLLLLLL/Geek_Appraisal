#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double n = 0;
	double h = 0.001;
	double x;
//	double a;
	printf("请输入常数a的值: a = 3\n");
//	scanf(" %lf\n ", &a);
	double y = 3;
	printf("-------------------\n");
	printf("x        y\n");
	while(n < 25000) {
		n++;
		x = n * h;
		y = y - (h * y);
		printf("%f %f\n", x, y);
	}
	return 0;
}

