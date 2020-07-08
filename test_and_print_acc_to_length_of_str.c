/*
Write a C program which reads a text from the standard input (Keyboard) and if its length is bigger than
10 print out a the second five letters (Letter at index 5,6,7,8 and 9).
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){
	char text1[100] = "Abcdefghijklmnop";
	char text2[100];
	puts("Type in your text:");
	gets(text1);
	if(strlen(text1)<10){
		exit(0);
	}
	strncpy(text2, text1 + 5, 5);
	text2[5]= '\0';
	puts(text2);
	return 0;
}
