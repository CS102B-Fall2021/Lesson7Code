#include <stdio.h>
#include <f1.h>


int main() {
	printf("In main\n");

	f();

	board[0][0] = 'A';
	printf("board[0][0]=%c\n", board[0][0]);
	printf("board[1][1]=%c\n", board[1][1]);

	return 0;
}	
