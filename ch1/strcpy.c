
static char *strcpy(char *dst, const char*src) {
    char *s = dst;
    while((*dst++ = *src++) != '\0')
        ;
    return s;
}