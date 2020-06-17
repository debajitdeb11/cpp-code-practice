#include <stdio.h>
#include <stdlib.h>

void printHello(char *name) {
	printf("Hello %s\n", name);
}


int main () {

	// creating a void pointer
	// to call printHello() function

	void (*ptr)(char*);

	ptr = &printHello;
	
	ptr("Debajit");

	return 0;

}
