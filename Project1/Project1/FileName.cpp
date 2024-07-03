#include <iostream>
int function(const char* str, const char* word) {
    int a = 0;
    int b = 0;
    int c = 0;

    while (str[b] != '\0') {
        b++;
    }

    while (word[c] != '\0') {
        c++;
    }

    for (int i = 0; i <= b - c; i++) {
        int j = 0;
        while (j < c && str[i + j] == word[j]) {
            j++;
        }
        if (j == c) {
            a++;
        }
    }

    return a;
}
int main() 
{
}