char* custom_strstr(char* arr, char* check) {
     char* c = check;
     while (*c) {
        if (*c == '\n') {
            *c = '\0';
            break;
        }
        ++c;
    }

    
    if (!*check) return arr;

    while (*arr) {
        char* arr_temp = arr;
        char* check_temp = check;

        while (*arr_temp && *check_temp && *arr_temp == *check_temp) {
            ++arr_temp;
            ++check_temp;
        }

        if (!*check_temp) return arr;

        ++arr;
    }

    return 0;
}
