void custom_strcat(const int size, char* arr, char* cat){
	int count = 0;
    while (arr[count]) {
        ++count;
    }   
    int i = 0;
    while (cat[i]) {
        arr[count + i] = cat[i];
        ++i;
    }
    
}
    
