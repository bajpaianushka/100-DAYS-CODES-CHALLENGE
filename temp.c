#include <stdio.h>
int main() {
	float c;
	scanf("%f", &c);
	float f = c * 9.0/5.0 + 32;
	printf("Fahrenheit=%.0f\n", f);
	return 0;
}
