#include <stdio.h>
#include <string.h>
int main ()
{
// char array to take input
char inputString[100];
// char array to build output
char outputString[100];
int length;
int i;
// Take input from the user : input in character array
printf( "Please Enter a string to be reversed \n" );
scanf( "%s", inputString );
// Find the number of characters or length of a string using in built function strlen() from string.h library
length = strlen( inputString );
int j = 0;
// Traverse character by character from end to start and form a new string
for( i = length - 1; i >= 0; i--) {
outputString[ j ] = inputString[ i ];
j++;
}
printf( "The reversed string is: ");
printf( "%s", outputString );
printf( "\n" );
return 0;
}