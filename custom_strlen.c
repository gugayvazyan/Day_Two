int custom_strlen(const int n, char *arr) {
    int count = 0;
    while (arr[count]) {
        ++count;
    }
    return count;
}
