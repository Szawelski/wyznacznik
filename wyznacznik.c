/* Rozwiazywanie ukladu rownan za pomoca wyznacznikow */

#include <stdio.h>
#include <math.h>

int zapetlenie = 1;
void wczytaj (double *a1, double *b1, double *c1, double *a2, double *b2, double *c2){
		printf("Podaj a1 = "); 
		scanf("%lf", a1);
		printf("Podaj b1 = "); 
		scanf("%lf", b1);
		printf("Podaj c1 = "); 
		scanf("%lf", c1);
		printf("Podaj a2 = "); 
		scanf("%lf", a2);
		printf("Podaj b2 = "); 
		scanf("%lf", b2);
		printf("Podaj c2 = "); 
		scanf("%lf", c2);
}
double wyzn_gl(double a1, double b1, double a2, double b2){
	return a1*b2 - a2*b1;
}
double wyznacznik_x(double c1, double c2, double b1, double b2){
	return c1*c2 - b1*b2;
}
double wyznacznik_y(double a1, double c2, double c1, double a2){
	return a1*c2 * c1 *a2;
}
int main (){
	while(zapetlenie == 1){
		double a1, a2, b1, b2, c1, c2;
		double W, Wx, Wy;
		double x, y;
		printf("\nProgram rozwiązujący układ równań za pomocą wyznaczników\n");
		wczytaj(&a1, &b1, &c1, &a2, &b2, &c2);
		W = wyzn_gl(a1, b1, a2, b2);
		Wx = wyznacznik_x(c1, c2, b1, b2);
		Wy = wyznacznik_y(a1, c2, c1, a2);
		x = Wx / W;
		y = Wy / W;
		printf("x = %lf, y = %lf\n", x, y);
		printf("Jeśli chcesz liczyć dalej wciśnij 1, jeśli nie wciśnij 2\n");
		scanf("%d", &zapetlenie);
	}
	return 0;
}
