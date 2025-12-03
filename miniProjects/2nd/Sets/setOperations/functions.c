#include "functions.h"

// Initialize set to empty
void initialize(Set s) {
    s[0] = '\0';
}

// Make set null (same as initialize)
void makeNull(Set s) {
    initialize(s);
}

// Check if element is member
bool ismember(Set s, char elem) {
    return strchr(s, elem) != NULL;
}

// Sort the set (bubble sort for simplicity)
void sortSet(Set s) {
    int len = strlen(s);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (s[i] > s[j]) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

// Insert element if not present, then sort
void insert(Set s, char elem) {
    if (ismember(s, elem)) return;
    int len = strlen(s);
    if (len >= MAX - 1) return; // full
    s[len] = elem;
    s[len + 1] = '\0';
    sortSet(s);
}

// Delete element if present
void deleteElem(Set s, char elem) {
    int len = strlen(s);
    int i;
    for (i = 0; i < len; i++) {
        if (s[i] == elem) break;
    }
    if (i == len) return; // not found
    for (int j = i; j < len - 1; j++) {
        s[j] = s[j + 1];
    }
    s[len - 1] = '\0';
}

// Assign src to dest
void assign(Set dest, Set src) {
    strcpy(dest, src);
}

// Get min element
char min(Set s) {
    if (s[0] == '\0') return '\0';
    return s[0];
}

// Get max element
char max(Set s) {
    int len = strlen(s);
    if (len == 0) return '\0';
    return s[len - 1];
}

// Check if sets are equal
bool equal(Set a, Set b) {
    return strcmp(a, b) == 0;
}

// Union of a and b
void unionSets(Set result, Set a, Set b) {
    initialize(result);
    int lenA = strlen(a);
    int lenB = strlen(b);
    for (int i = 0; i < lenA; i++) {
        insert(result, a[i]);
    }
    for (int i = 0; i < lenB; i++) {
        insert(result, b[i]);
    }
}

// Intersection of a and b
void intersection(Set result, Set a, Set b) {
    initialize(result);
    int lenA = strlen(a);
    for (int i = 0; i < lenA; i++) {
        if (ismember(b, a[i])) {
            insert(result, a[i]);
        }
    }
}

// Difference a - b
void difference(Set result, Set a, Set b) {
    initialize(result);
    int lenA = strlen(a);
    for (int i = 0; i < lenA; i++) {
        if (!ismember(b, a[i])) {
            insert(result, a[i]);
        }
    }
}

// Symmetric difference (a - b) union (b - a)
void symmetricDiff(Set result, Set a, Set b) {
    Set diffAB, diffBA;
    difference(diffAB, a, b);
    difference(diffBA, b, a);
    unionSets(result, diffAB, diffBA);
}

// Merge (same as union)
void merge(Set result, Set a, Set b) {
    unionSets(result, a, b);
}

// Find element (return elem if found, else '\0')
char find(Set s, char elem) {
    if (ismember(s, elem)) return elem;
    return '\0';
}

// Ask input for two sets
void askInput(Set a, Set b) {
    char input[MAX * 2]; // buffer
    initialize(a);
    initialize(b);
    printf("Enter characters for set A (no spaces, e.g. abc): ");
    scanf("%s", input);
    for (int i = 0; input[i] != '\0'; i++) {
        insert(a, input[i]);
    }
    printf("Enter characters for set B: ");
    scanf("%s", input);
    for (int i = 0; input[i] != '\0'; i++) {
        insert(b, input[i]);
    }
}

// Print the set
void printSet(Set s) {
    printf("{");
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        printf("%c", s[i]);
        if (i < len - 1) printf(", ");
    }
    printf("}\n");
}
