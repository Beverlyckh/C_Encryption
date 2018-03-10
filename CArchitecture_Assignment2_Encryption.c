/*
 ============================================================================
 Name        : CArchitecture_Assignment2_Encryption.c
 Author      : Beverly Ackah
 Version     :
 Copyright   : Your copyright notice
 Description : Encryption code !
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


int main(){

	char wordEntered[128];//ASCII alphabet
	printf("Enter a word:");
	scanf("%s", wordEntered);

	char numEntered[128];
	printf("Enter a number:");
	scanf("%s", numEntered);

	int x;
	x = atoi(numEntered); // convert the char num in int

	if(x > 26){
		x = x%26; //26 letters in alphabet, so exceeding value will have to be
		//re-converted using mod 26!
	}

	int y;
	int i ; //strlen = length of the string we got
	for(i=0; i<strlen(wordEntered); i++){
		y=wordEntered[i];
		y+=x;
		if((y>91 && y<97) || y>122){ // we have to convert!
			y-=26;
		}
		wordEntered[i]=y;
	}


	printf("Encrypted text: %s", wordEntered);

}
