#include <stdio.h>
#include <float.h>

int maxProduct(int *arr) {
    int largest = arr[0];
    int secLargest = (int)(-DBL_MAX);   //DBL_MAX is a Macro in float.h header file
    for(int i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            secLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secLargest) {
            secLargest = arr[i];
        }
    }
    return largest*secLargest;
}

int main() {
    int arr[] = {2,4,3,6,1};
    int res = maxProduct(arr);
    printf("%d\n", res);
}
