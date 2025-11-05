# Code Optimization Guidelines

This document provides best practices for writing efficient competitive programming code.

## C++ Optimizations

### 1. Avoid `#include <bits/stdc++.h>`
**Problem**: This header includes the entire C++ standard library, causing slow compilation times.

**Bad**:
```cpp
#include <bits/stdc++.h>
```

**Good**:
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
// Only include what you need
```

**Impact**: Compilation time can be reduced by 50-80% in some cases.

### 2. Minimize Unused Includes
Only include headers that you actually use in your code. Common includes for competitive programming:
- `<iostream>` - for cin/cout
- `<vector>` - for vectors
- `<algorithm>` - for sort, min, max, etc.
- `<string>` - for strings
- `<map>` / `<unordered_map>` - for maps
- `<set>` / `<unordered_set>` - for sets
- `<queue>` / `<stack>` - for queues and stacks
- `<numeric>` - for gcd, accumulate

### 3. Avoid Unnecessary Precomputation
**Bad**: Computing all possible values upfront
```cpp
// Precomputing 1 million GCD values at startup
void precompute() {
    for(int i = 1; i <= 1000; i++) {
        for(int j = 1; j <= 1000; j++) {
            if(gcd(i,j) == 1) store[i].push_back(j);
        }
    }
}
```

**Good**: Compute on-demand only for values that exist
```cpp
// Only compute GCD for actual input values
for(int i = 1; i <= 1000; i++) {
    if(lastIndex[i] == 0) continue; // Skip if not in input
    for(int j = i; j <= 1000; j++) {
        if(lastIndex[j] == 0) continue;
        if(__gcd(i, j) == 1) {
            ans = max(ans, lastIndex[i] + lastIndex[j]);
        }
    }
}
```

### 4. Use Built-in Functions
Use standard library functions instead of implementing your own when possible:
- Use `__gcd(a, b)` or `std::gcd(a, b)` (C++17) instead of custom GCD
- Use `std::min`, `std::max` instead of conditional checks
- Use `std::count`, `std::find` for searching

### 5. Smart Data Structures
- Use `vector` instead of dynamically allocating arrays
- Use `unordered_map` for O(1) lookups when order doesn't matter
- Use arrays for fixed-size data (faster than vectors)

## Python Optimizations

### 1. Use `join()` Instead of Multiple `print()` Calls
**Bad**:
```python
for num in arr:
    print(num, end=' ')
print()
```

**Good**:
```python
print(' '.join(map(str, arr)))
```

**Impact**: Can be 2-3x faster for large arrays.

### 2. Avoid Creating Unnecessary List Copies
**Bad**: Creating reversed copy for comparison
```python
if arr == arr[::-1]:  # Creates a new reversed list
    print("YES")
```

**Good**: Check palindrome with indices
```python
def is_palindrome(arr):
    n = len(arr)
    for i in range(n // 2):
        if arr[i] != arr[n - 1 - i]:
            return False
    return True
```

### 3. Use List Comprehension
**Bad**:
```python
result = []
for x in arr:
    if x > 0:
        result.append(x * 2)
```

**Good**:
```python
result = [x * 2 for x in arr if x > 0]
```

### 4. Use `enumerate()` Instead of `range(len())`
**Bad**:
```python
for i in range(len(arr)):
    print(i, arr[i])
```

**Good**:
```python
for i, val in enumerate(arr):
    print(i, val)
```

### 5. Avoid Repeated Function Calls in Loops
**Bad**:
```python
for i in range(len(arr)):  # len() called every iteration
    process(arr[i])
```

**Good**:
```python
n = len(arr)
for i in range(n):
    process(arr[i])
```

## General Performance Tips

### 1. Time Complexity Analysis
Always analyze the time complexity of your solution:
- O(n) - Linear: Good for most problems
- O(n log n) - Sorting: Usually acceptable
- O(n²) - Quadratic: Only for small inputs (n ≤ 10³)
- O(n³) - Cubic: Very limited use (n ≤ 100)
- O(2ⁿ) - Exponential: Only for tiny inputs (n ≤ 20)

### 2. Input/Output Optimization
For C++:
```cpp
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
```

For Python:
```python
import sys
input = sys.stdin.readline
```

### 3. Choose the Right Data Structure
- **Array/Vector**: Fast access by index, fixed/dynamic size
- **Map/Dictionary**: Key-value pairs, O(log n) or O(1) access
- **Set**: Unique elements, O(log n) or O(1) operations
- **Queue/Stack**: FIFO/LIFO operations
- **Priority Queue (Heap)**: Get min/max in O(1), insert in O(log n)

### 4. Avoid Common Pitfalls
- Don't use `endl` excessively (use `'\n'` instead in C++)
- Avoid string concatenation in loops (use StringBuilder or vectors)
- Don't create new data structures unnecessarily
- Be careful with recursion depth (use iterative solutions when possible)

### 5. Memory Optimization
- Reuse variables and data structures when possible
- Use appropriate data types (int vs long long)
- Clear containers when they're no longer needed
- Use references to avoid copying large objects

## Testing Your Optimizations

1. **Measure compilation time**: Use `time g++ -O2 file.cpp`
2. **Test with large inputs**: Create test cases with maximum constraints
3. **Profile your code**: Identify bottlenecks
4. **Compare solutions**: Test both versions to ensure correctness

## Resources

- [CP-Algorithms](https://cp-algorithms.com/) - Algorithm reference with complexity analysis
- [Codeforces Catalog](https://codeforces.com/catalog) - Practice problems sorted by difficulty
- [TLE Eliminators](https://www.tle-eliminators.com/) - Structured learning path

---

Remember: **Correct first, optimize later.** Don't over-optimize before ensuring your solution is correct!
