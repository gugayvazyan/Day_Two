int custom_strspn(char *str, char *accept) {
    int count = 0;
	char* ac = accept;
	while (*ac) {
        if (*ac == '\n') {
            *ac = '\0';
            break;
        }
        ++ac;
    }


    while (*str) {
        char *a = accept;
        while (*a && *str != *a) a++;  
        if (!*a) return count;          
        ++count;
        ++str;
    }

    return count;
}
