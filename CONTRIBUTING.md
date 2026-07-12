# Contributing Guidelines

This repository documents my personal learning journey in C programming. While primarily for educational purposes, contributions and suggestions are welcome.

## Code Standards

### Style Guide
- **Indentation**: 4 spaces (no tabs)
- **Naming**: Use descriptive, lowercase names with underscores for variables and functions
- **Comments**: Add meaningful comments explaining logic, especially for complex algorithms
- **Line length**: Keep lines under 80 characters when practical

### Example Code Style
```c
#include <stdio.h>

// Function to calculate sum of array elements
int calculate_sum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numbers[] = {10, 20, 30, 40};
    int size = 4;
    int total = calculate_sum(numbers, size);
    printf("Sum: %d\n", total);
    return 0;
}
```

## File Organization

- Place each concept's programs in their dedicated directory
- Use descriptive filenames: `array_operations.c`, `pointer_basics.c`
- Keep related files in the same folder
- Add a brief `README.md` in concept directories with descriptions

## Suggestions for Improvements

If you find areas for improvement:
1. Fork the repository
2. Create a branch with your changes
3. Submit a pull request with a clear description
4. Reference the concept being improved

## Issues

Feel free to open issues for:
- Bugs or errors in existing code
- Suggestions for new concepts to cover
- Clarifications needed in documentation

---

Thank you for contributing to this learning repository!
