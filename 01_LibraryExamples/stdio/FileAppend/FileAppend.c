#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){

//int n;
int i;

char ch[1];			    	// char *arr,ch; arr = (int*)malloc( sizeof(char) * 150 );
char arr[150];

FILE *filep=fopen("Asaf.txt","a");	// Make Asaf.txt available through filep pointer.

// printf("Estimated Number of Characters: "); 
// scanf("%d",&n);

// arr=(char *)malloc(n*sizeof(char));

printf("Write your messages here: ");

// scanf("%d",&n);if i want to learn size of sentences.it is a option for good programming.	

fgets(arr,150,stdin); 	// arr-> place where inputs take part in. 150-> size of array arr.stdin->standart input func.

fputs(arr,filep);	// fputs is function that put string in to file .

ch[0]='\n';		// make space in the text so messages will not be complex to read.

fputc(ch[0],filep);	// send space in the text.

fclose(filep);		// close the file.

return 0;

}
