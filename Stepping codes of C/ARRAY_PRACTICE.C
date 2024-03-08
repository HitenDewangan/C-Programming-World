//////////////////////////////////////////////// FOR UNIQUE VALUES ///////////////////////////////////////////////////////////////////
#include <stdio.h>

int main() {
    int a[] = {10,10,20,20,30,30};
    int size = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (a[i] == a[j]) {
                	printf("%d ", a[i]);
                }
            }
    }

    return 0;
}