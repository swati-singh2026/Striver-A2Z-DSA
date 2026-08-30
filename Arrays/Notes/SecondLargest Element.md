# Second Largest Element in an Array

## Pattern

Array Traversal + Two Variables

---

## Problem

Find the **second largest distinct** element in the array.  
Return **-1** if it does not exist.

---

## Recognition Clue

- Need the **largest** and **second largest**.
- Solve in a **single traversal**.
- No sorting required.

---

## Approach

1. Initialize:
   - `largest = nums[0]`
   - `secondLargest = INT_MIN`
2. Traverse the array once.
3. If current element is greater than `largest`:
   - Update `secondLargest = largest`
   - Update `largest = current`
4. Else if current element lies between `largest` and `secondLargest`:
   - Update `secondLargest`.
5. If `secondLargest == INT_MIN`, return `-1`; otherwise return `secondLargest`.

---

## Complexity

- **Time:** O(n)
- **Space:** O(1)

---

## Mistake / Learning

- ❌ Don't sort the array (O(n log n)).
- ❌ Don't consider duplicate largest values as the second largest.
- ✅ Update `secondLargest` **before** updating `largest`.
- ✅ Use `INT_MIN` to indicate that no second largest has been found yet.

---

## Revision Trick (30 sec)

Maintain Two Variables

↓

Largest & Second Largest

↓

Update in One Pass

↓

Ignore Duplicates

↓

Return `-1` if Second Largest Doesn't Exist
