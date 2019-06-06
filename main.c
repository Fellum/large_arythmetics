#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <string.h>
char		*make_ldouble(long double val, int precision);
char		*make_double(double val, int precision);

int main() {
	long double d = 0.0000000220950000000000000000000000000000000003430000000343;
	int pres = 500;
	printf("\n%d\n",printf("%.*Lf", pres, d));
	char *tmp = make_ldouble(d, pres);
	printf("%s\n%ld\n", tmp, strlen(tmp));
	free(tmp);

	double dd = DBL_MAX;
	int press = 16000;
	printf("\n%d\n",printf("%.*lf", press, dd));
	char *tmpp = make_double(dd, press);
	printf("%s\n%ld\n", tmpp, strlen(tmpp));
	free(tmpp);

	return 0;
}