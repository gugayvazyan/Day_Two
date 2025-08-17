#include "custom_strchr.c"
char* custom_strrchr(char* arr, char letter) {
    

    while(*arr) ++arr;

     while(*arr - 1 != arr[0]) {
        if (*arr == letter) {
            return arr;
        }
        --arr;
    }

    
    return 0;
}
