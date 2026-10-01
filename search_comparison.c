#include <stdio.h>
#include <string.h>

#define N 7
#define MAX_NAME 30

typedef struct {
    const char *target;
    int linearComparisons;
    int binaryComparisons;
    int linearPosition;
    int binaryPosition;
} SearchResult;

int linearSearch(const char *arr[], int n, const char *target, int *comparisons) {
    *comparisons = 0;
    for (int i = 0; i < n; i++) {
        (*comparisons)++;
        if (strcmp(arr[i], target) == 0)
            return i;
    }
    return -1;
}

int binarySearch(const char *arr[], int n, const char *target, int *comparisons) {
    int low = 0, high = n - 1;
    *comparisons = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        (*comparisons)++;

        int result = strcmp(arr[mid], target);
        if (result == 0)
            return mid;
        else if (result < 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main(void) {
    /* Sorted representation is required for binary search. */
    const char *departments[N] = {
        "Backend", "Development", "Finance", "Frontend",
        "HR", "IT", "Testing"
    };

    const char *targets[] = {"Frontend", "HR", "Testing"};
    const int searchCount = 3;

    printf("Department Search Comparison\n");
    printf("=============================\n\n");
    printf("Sorted department list:\n");
    for (int i = 0; i < N; i++) {
        printf("%d. %s\n", i + 1, departments[i]);
    }

    printf("\nSearch results:\n");
    printf("%-12s %-18s %-18s\n", "Department", "Linear Comparisons", "Binary Comparisons");
    printf("--------------------------------------------------------------\n");

    for (int i = 0; i < searchCount; i++) {
        int linearComparisons, binaryComparisons;
        int linearPos = linearSearch(departments, N, targets[i], &linearComparisons);
        int binaryPos = binarySearch(departments, N, targets[i], &binaryComparisons);

        printf("%-12s %-18d %-18d\n", targets[i], linearComparisons, binaryComparisons);
        printf("  Linear result: %s at position %d\n", linearPos >= 0 ? "Found" : "Not Found", linearPos + 1);
        printf("  Binary result: %s at position %d\n", binaryPos >= 0 ? "Found" : "Not Found", binaryPos + 1);
    }

    return 0;
}
