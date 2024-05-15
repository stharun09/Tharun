#include <stdio.h>
#include <ctype.h>

char* merge_strings(const char* s1, const char* s2) {
    char result[100]; // Assuming maximum length of result
    int i = 0, j = 0, k = 0;

    while (s1[i] != '\0' && s2[j] != '\0') {
        if (isalpha(s1[i]) && isalpha(s2[j])) {
            result[k++] = s1[i++];
            j++;
        } else if (isalpha(s1[i])) {
            result[k++] = s1[i++];
        } else if (isalpha(s2[j])) {
            result[k++] = s2[j++];
        } else {
            i++;
            j++;
        }
    }

    result[k] = '\0'; // Null-terminate the result string
    return result;
}

int main() {
    const char *s1 = "hello @#$!World   !!";
    const char *s2 = "#@  woRLd !";
    char *output = merge_strings(s1, s2);
    printf("%s\n", output); // Output: "he$"
    return 0;
}

