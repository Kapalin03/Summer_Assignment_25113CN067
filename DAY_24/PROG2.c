#include <stdio.h>
#include <string.h>

void find_common(char ch1[100], char ch2[100]);

int main() {
    char ch1[100];
    char ch2[100];
    
    printf("Enter the first string: ");
    fgets(ch1, 100, stdin);
    int b1 = strlen(ch1);
    ch1[b1 - 1] = '\0'; // Stripping newline your way
    
    printf("Enter the second string: ");
    fgets(ch2, 100, stdin);
    int b2 = strlen(ch2);
    ch2[b2 - 1] = '\0'; // Stripping newline your way
    
    find_common(ch1, ch2);
    
    return 0;
}

void find_common(char ch1[100], char ch2[100]) {
    int i, j, k = 0;
    char ch3[100]; // To store the common characters
    
    int b1 = strlen(ch1);
    int b2 = strlen(ch2);
    
    for(i = 0; i < b1; i++) {
        // Skip if this character was already matched/processed
        if(ch1[i] == -1) { 
            continue; 
        }
        
        char a = ch1[i];
        
        // Look for a match in the second string
        for(j = 0; j < b2; j++) {
            if(ch2[j] == -1) { 
                continue; 
            }
            
            // If we find a match
            if(ch2[j] == a) {
                ch3[k] = a; // Add it to our common list
                k++;
                
                ch2[j] = -1; // Mark it as used in string 2 so it isn't matched again
                break;       // Break inner loop to move to the next char in ch1
            }
        }
    }
    
    ch3[k] = '\0'; // Null-terminate the result string
    
    printf("Common characters: ");
    puts(ch3);
}