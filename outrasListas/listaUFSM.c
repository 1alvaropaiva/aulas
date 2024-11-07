#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(){
	char c;
	c = getch();
	printf("%c", c);
	
	
	
	
	return 0;
}







































/*
exercicios lista ufsm

1) 
int main(){
	char x[50];
	gets(x);
	printf("%s", x);
	return 0;
}

2)
int main(){
	char s[50], x;
	int i, contv = 0;
	gets(s);
	for (i=0; i<strlen(s); i++){
		x = toupper(s[i]);
		if (x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
			contv++;
		}
	}
	
	printf("qd de vogais: %d", contv);
	
	return 0;
}

3)
int main(){
	char s[50];
	gets(s);
	for (int i=strlen(s)-1; i>=0; i--){
		printf("%c", s[i]);
	}
		
	return 0;
}

*/
