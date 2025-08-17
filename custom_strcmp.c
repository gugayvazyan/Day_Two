int custom_strcmp(char* arr, char* arr1) {
    int size = 81;
    int i = 0;
    int res = 0;
    while (i < size) {
        if (arr[i] != arr1[i] || arr[i] == '\0' || arr1[i] =='\0') {
            res = arr[i] - arr1[i];
            return res;
        } 
        ++i;  
    }
    return res;
} 
     
