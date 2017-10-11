#include <stdio.h>

int main(int arg, char* argc[]){
	int a;
	int* b;
	long c;
	double* d;
	char** e;

	printf("%d\t%d\t%d\t%d\t%d", sizeof(a), sizeof(b),sizeof(c),sizeof(d),sizeof(e));
}
