void custom_strcat(char* arr, char* cat){
	int count = 0;
    while (arr[count]) {
      if (arr[count] == '\n') {
        arr[count] = ' ';
        }
        ++count;
    } 
    int i = 0;
    while (cat[i]) {
        arr[count-1 + i] = cat[i];
        ++i;
    }
    
}
    
