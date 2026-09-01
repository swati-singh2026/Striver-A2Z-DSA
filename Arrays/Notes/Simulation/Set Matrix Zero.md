# Set Matrix Zeroes (Optimal)

## Pattern

Matrix + In-place Marking

## Problem

If a cell is `0`, set its entire row and column to `0` using **O(1)** extra space.

## Key Idea

- Use the **first row** as column markers.
- Use the **first column** as row markers.
- Store first column's state separately (`col0`).

## Algorithm

1. Traverse matrix and mark rows/columns.
2. Update remaining cells using markers.
3. Handle the first row.
4. Handle the first column.

## Complexity

- **Time:** O(m × n)
- **Space:** O(1)

## Learning

Instead of extra arrays, reuse the first row and first column as marker arrays to achieve constant space.
