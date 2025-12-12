#include<stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sum(int n) {
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

int sumarray(int arr[], int n) {
    if (n <= 0)
        return 0;
    return arr[n - 1] + sumarray(arr, n - 1);
}

int searcharray(int arr[], int n, int target) {
    if (n <= 0)
        return -1;
    if (arr[n - 1] == target)
        return n - 1;
    return searcharray(arr, n - 1, target);
}

int main() {
    int num1, num2, choice, i;
    
    printf("Choose an operation:\n");
    printf("1. GCD\n");
    printf("2. Factorial\n");
    printf("3. Fibonacci\n");
    printf("4. Sum of first N natural numbers\n");
    printf("5. Sum of array elements\n");
    printf("6. Search in array\n");
    scanf("%d", &choice);
    
    if(choice == 1) {
        printf("Enter two integers: ");
        scanf("%d %d", &num1, &num2);
        printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    }
    else if(choice == 2) {
        int num;
        printf("Enter a number to compute its factorial: ");
        scanf("%d", &num);
        printf("Factorial of %d is %d\n", num, factorial(num));
    }
    else if(choice == 3) {
        int fibIndex;
        printf("Enter the index to compute Fibonacci number: ");
        scanf("%d", &fibIndex);
        printf("Fibonacci number at index %d is %d\n", fibIndex, fibonacci(fibIndex));
    }
    else if(choice == 4) {
        int n;
        printf("Enter a number to compute sum of first N natural numbers: ");
        scanf("%d", &n);
        printf("Sum of first %d natural numbers is %d\n", n, sum(n));
    }
    else if(choice == 5) {
        int n;
        printf("Enter the number of elements in the array: ");
        scanf("%d", &n);
        int arr[n];
        printf("Enter the elements of the array:\n");
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("Sum of array elements is %d\n", sumarray(arr, n));
    }
    else if(choice == 6) {
        int n, target, result;
        printf("Enter the number of elements in the array: ");
        scanf("%d", &n);
        int arr[n];
        printf("Enter the elements of the array:\n");
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("Enter the target value to search: ");
        scanf("%d", &target);
        result = searcharray(arr, n, target);
        if (result != -1) {
            printf("Element %d found at index %d\n", target, result);
        } else {
            printf("Element %d not found in the array\n", target);
        }
    }
    else {
        printf("Invalid choice.\n");
    }
    
    return 0;
}
// End of Functions/Recursion.c