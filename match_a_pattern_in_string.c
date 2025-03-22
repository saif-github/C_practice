#include <stdio.h>

int search(char *s, char *p) {
    int i = 0, j = 0;
  
  	// Traverse the string s
    while (s[i] != '\0') {
      
      	// Match the characters of p one by one
        if (s[i] == p[j]) {
            j++;
          
          	// If all characters are matched
            if (p[j] == '\0') return 1; 
        } else j = 0;
        i++;
    }
  
  	// If pattern is not found
    return 0;
}

int main() {
    char s[] = "ethos pathos logos";
    char p[] = "pathos";

    // Matching pattern p in string s
    int res = search(s, p);
    if (res)
        printf("Found\n\a");
    else
        printf("Not found.\n\a");

    return 0;
}
