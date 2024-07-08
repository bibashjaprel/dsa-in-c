#include <stdio.h>

int main() {
    FILE *file = fopen("phonenumber.txt", "a"); 
    if (file == NULL) {
        perror("Error opening file");
        return 1; 
    }

    
    while(1){
        int c =getchar();
        fprintf(file, "%s", c);
    
    
    }
    fclose(file);
    return 0;
}
