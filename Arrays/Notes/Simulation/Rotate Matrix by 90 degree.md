## Rotate Matrix (90° Clockwise) (Striver)

**Pattern:** Matrix + Transpose + Reverse

**Concepts**

- Transpose the matrix.
- Reverse every row.
- Use only the upper triangle (`j = i + 1`) to avoid duplicate swaps.

**Approach**

1. Find `n = matrix.size()`.
2. Transpose the matrix.
3. Reverse every row.

**Key Syntax**

```cpp
int n = matrix.size();

swap(matrix[i][j], matrix[j][i]);

reverse(matrix[i].begin(), matrix[i].end());
```

**Complexity**

- Time: `O(n²)`
- Space: `O(1)`

**Key Learning**

- **90° Clockwise = Transpose + Reverse Every Row**
- **Transpose:** Swap `matrix[i][j]` ↔ `matrix[j][i]`.
- Traverse only the upper triangle (`j = i + 1`).
