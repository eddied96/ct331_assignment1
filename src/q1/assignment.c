#include <stdio.h>

	void main(int arg, char* argc[]) {
		int var1;
		int* var2;
		long var3;
		double* var4;
		char** var5;

		printf("%d\n%d\n%d\n%d\n%d", sizeof(var1), sizeof(var2), sizeof(var3), sizeof(var4), sizeof(var5));
	}

