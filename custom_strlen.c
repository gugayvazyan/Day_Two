int custom_strlen(char *arr) {
    int count = 0;
    while (arr[count]) {
        ++count;
    }
    return count;
}
