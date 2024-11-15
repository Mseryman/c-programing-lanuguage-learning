#include <stdio.h>

int main(){
    printf("hello world\n");// \n represents new line and is a escape sequence charater
    printf("hello \tworld\n");// \t represents tab and is a escape sequence charater
    printf("hello \bworld\n");// \b represents backspace and is a escape sequence charater
    printf("hello \\world\n");// \\ represents backslash and is a escape sequence charater
    printf("hello \"world\"\n");// \" represents double quotes and is a escape sequence charater and this can be done with a single quote as well
    return 0;
}