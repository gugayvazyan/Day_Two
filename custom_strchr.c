char* custom_strchr(char* arr, char letter) {

    while (*arr) {
        if (*arr == letter) {
            return arr;
        }
        ++arr;
    }
    return 0;
}
    

