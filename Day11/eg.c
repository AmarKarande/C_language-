#include <stdio.h>
#include<string.h>

int main() {
    char str1[100] = "FirstName";
    char str2[100] = "LastName";
    
    char result[100];
    
    int i = 0;
    
    // Copying str1 to result
    for (i = 0; i < 100; i++) {
        if (str1[i] != 0) {
            result[i] = str1[i];
        } else {
            // End of str1, break to append str2
            break;
        }
    }

    // Copying str2 to result after str1 ends
    for (int j = 0; j < 100; j++) {
        if (str2[j] != 0) {
            result[i] = str2[j];
            i++;
        } else {
            break;
        }
    }
    
    // Null-terminate the result string
    result[i] = '\0';

    printf("Without Concat = %s\n", result);
    
    return 0;
}
