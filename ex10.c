#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	
	// go through each string in argv
	// why am I skipping argv[0]?
	for(i = 1; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}
	
	// let's make our own array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington", NULL // print (null)
	};
	// states[0] = argv[0];
	
	int num_states = 4;
	
	for(i = 0; i < num_states; i++) {
		if(i > 2) {
			break; // ex12: terminate the loop in advance
		}
		
		printf("state %d: %s\n", i, states[i]);
	}
	
	return 0;
}
