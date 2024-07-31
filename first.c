#include <stdio.h>
#include <cs50.h>

int main(void) {
    printf("hi\n");
    string answer = get_string("whats your name? ");
    printf("szia %s",answer);
}