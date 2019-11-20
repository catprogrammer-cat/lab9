// Input a string and change punctuation
// marks with symbol '#'

#include <stdio.h> // for gets, puts;
#include <conio.h> // for getch();
#include <string.h> // for strlen (s); necessary in online compiler

int main()
{
    char string[50];
    int i, len, quantity=0;
    puts("Enter a string: ");

    gets(string); //or gets(string) in online compiler
    len=strlen(string); //Length of the string
    for (i=0; i<len; i++){
        if(string[i] ==  ',' || string[i] == '.' || string[i] == '!' || string[i] == '?'){
            string[i] = '#';
        }
    }
    printf("%s\n", string);
    getch();
    return 0;
}
// Enter a string:
// Hello! My name is Vlad. How are you?
// Hello# My name is Vlad# How are you#
