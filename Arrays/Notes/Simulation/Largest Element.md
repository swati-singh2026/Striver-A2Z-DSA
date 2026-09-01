# Largest Element in an Array

## Pattern

Array Traversal

---

## Problem

Find the largest element in the given array.

---

## Recognition Clue

- Find **maximum** element.
- Single traversal is sufficient.
- No sorting required.

---

## Approach

1. Initialize `largest = nums[0]`.
2. Traverse the array from index `1`.
3. If `nums[i] > largest`, update `largest`.
4. Return `largest`.

---

## Complexity

- **Time:** O(n)
- **Space:** O(1)

---

## Mistake / Learning

- ❌ Don't sort the array (O(n log n)).
- ✅ Keep track of the maximum while traversing.
- ✅ Initialize with the first element to handle negative numbers.

---

## Revision Trick (30 sec)

Start with First Element

↓

Traverse Array

↓

Update Maximum

↓

Return Largest
