# Next Permutation (Optimal)

## Pattern

Simulation + Greedy

---

## Problem

Given an array, find the **next lexicographically greater permutation**.

If no next permutation exists, return the **smallest permutation**.

---

## Recognition Clue

- "Next lexicographical permutation"
- "Modify in-place"
- "Constant extra space"

---

## Mindset

**Next Permutation = Smallest Possible Increase**

---

## Approach

1. Find the **pivot** from the right:
   - `nums[i] < nums[i + 1]`
2. If no pivot exists, reverse the entire array.
3. Find the **just greater** element than the pivot from the right.
4. Swap the pivot and that element.
5. Reverse the suffix (`i + 1` to end).

---

## Complexity

- **Time:** O(n)
- **Space:** O(1)

---

## Mistake / Learning

- ❌ Don't swap with any greater element.
- ✅ Swap with the **just greater** element.
- ❌ Don't sort the suffix.
- ✅ Simply reverse it (it's already in decreasing order).

---

## Revision Trick (30 sec)

Find Pivot

↓

Find Just Greater

↓

Swap

↓

Reverse Suffix

↓

**Next Lexicographical Permutation**
