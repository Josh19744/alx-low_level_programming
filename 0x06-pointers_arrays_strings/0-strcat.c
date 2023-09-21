#include <stdio.h>

char *_strcat(char *dest, char *src) {
int i;
for (i = 0; dest[i] != '\0'; i++);

int j;
for (j = 0; src[j] != '\0'; j++) {
dest[i+j] = src[j];
}

dest[i+j] = '\0';

return dest;
}

int main() {
char str1[50] = "Hello";
char str2[] = " World!";

printf("Before concatenation: %s\n", str1);
_strcat(str1, str2);
printf("After concatenation: %s\n", str1);
return 0;
}
