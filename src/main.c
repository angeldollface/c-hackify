/*
C-HACKIFY by Alexander Abraham 
a.k.a. "Angel Dollface".
Licensed under the MIT license.
*/

// Import from the
// standard library
// to use the "printf"
// macro.
#include <stdio.h>

// Import from the
// standard library
// to use the "strlen"
// function.
#include <string.h>

// This function replaces all the characters in
// a string with number characters where possible
// and returns a pointer to the resulting string.
const char * replace_chars(char user_string[]){
    char * result = user_string;
    for (int i = 0; i < strlen(user_string); i++){
        if (user_string[i] == 'a' ){
            result[i] = '4';
        }
        else if (user_string[i] == 'i'){
            result[i] = '1';
        }
        else if (user_string[i] == 'z'){
            result[i] = '2';
        }
        else if (user_string[i] == 'e'){
            result[i] = '3';
        }
        else if (user_string[i] == 's'){
            result[i] = '5';
        }
        else if (user_string[i] == 'g'){
            result[i] = '6';
        }
        else if (user_string[i] == 't'){
            result[i] = '7';
        }
        else if (user_string[i] == 'b'){
            result[i] = '8';
        }
        else if (user_string[i] == 'p'){
            result[i] = '9';
        }
        else if (user_string[i] == 'o'){
            result[i] = '0';
        }
        if (user_string[i] == 'A'){
            result[i] = '4';
        }
        else if (user_string[i] == 'I'){
            result[i] = '1';
        }
        else if (user_string[i] == 'Z'){
            result[i] = '2';
        }
        else if (user_string[i] == 'E'){
            result[i] = '3';
        }
        else if (user_string[i] == 'S'){
            result[i] = '5';
        }
        else if (user_string[i] == 'G'){
            result[i] = '6';
        }
        else if (user_string[i] == 'T'){
            result[i] = '7';
        }
        else if (user_string[i] == 'B'){
            result[i] = '8';
        }
        else if (user_string[i] == 'P'){
            result[i] = '9';
        }
        else if (user_string[i] == 'O'){
            result[i] = '0';
        }
        else {}
    }
    return result;
}

// A small CLI to make I/O easy.
void cli(int argc, char* argv[]){
     if (argc == 2){
        printf("%s\n", replace_chars(argv[1]));
    }
    else {
        printf("Invalid arguments supplied!\n");
    }
}

// The main point of entry for the
// C compiler.
int main(int argc, char* argv[]){
    cli(argc, argv);
}
