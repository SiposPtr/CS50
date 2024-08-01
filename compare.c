#include <cs50.h>
#include <stdio.h>

int main(void) {
    int x = get_int("X: ");
    int y = get_int("Y: ");

    if (x < y) {
        printf("x (%d) is smaller than y (%d)",x,y);
    } else if (x > y) {
        printf("x (%d) is bigger than y (%d)",x,y);
    } else if (x == y) {
        printf("x (%d) and y (%d) is equal",x,y);
    }
 }