#include <stdio.h>
//stdio -> Standard Input Output header file helps us in dealing with imput output stream

//In C, basically everything starts with main()
void main(){
	
	int array[3] = {5};
	// Array can store multiple values sequentially of the same data type. 
	
	int i;
	/*
	int - Integer
	float - Decimals
	char - Characters
	*/
	
	for (i=0; i<2; i++){
		printf("%d", array[i]);
		//printf is a function which streams the data to screen, in this particular case value of i'th index from 0 in array.
	}
}
