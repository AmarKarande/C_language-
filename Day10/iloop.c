#include <stdio.h>
#include<string.h>


int main() {
    char name[5]; 

    printf("Enter a name: ");
    for(int i = 0; i < 5; i++) {
        scanf(" %c", &name[i]); 
    }

    printf("The entered name is: ");
    for(int i = 0; i < 5; i++) {
        printf("%c", name[i]); 
    }

    return 0;
}
