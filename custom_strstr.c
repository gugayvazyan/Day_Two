char* custom_strstr(char* arr, char* check) {

    char* start_arr;
    char* start_check = check;
    
    if (!*check) return arr;
    


    while (*arr) {
        while (*arr && *check && *arr == *check) {
                if (*arr = *check) {

        }
        if(!(*check)) return start_arr;
        
        arr = start_arr  + 1;
    }

    return 0;
}
