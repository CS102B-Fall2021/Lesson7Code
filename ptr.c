#include <stdio.h>

int main() {

	int x=1, y=2, z[10];

	int *ip;

	ip = &x;

	// int *ip = &x;
	
	printf("x's address=ip=%x\n", ip);
	printf("x's address=ip=%x\n", &x);

	ip = &z[0];
	int *ip2 = z;

	printf("z[0]'s address=ip=%x\n", ip);
	printf("z[0]'s address=ip=%x\n", &z[0]);
	printf("z[0]'s address=ip=%x\n", z);

	printf("z[1]'s address=%x\n", &z[1]);
	printf("z[2]'s address=%x\n", &z[2]);
	printf("z[3]'s address=%x\n", &z[3]);
	printf("z[4]'s address=%x\n", &z[4]);
	

	return 0;
}
