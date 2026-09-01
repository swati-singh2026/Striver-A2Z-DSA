# Pascal Triangle I (Find One Element)

## Problem

Given **row (r)** and **column (c)** (1-based), find the value at that position in Pascal Triangle.

---

## Recognition Clue

- Only **one element** is required.
- Think **Combination (nCr)**.
- No need to generate the entire triangle.

---

## Approach

1. Convert to 0-based indexing:
   - `n = r - 1`
   - `k = c - 1`
2. Initialize `ans = 1`.
3. Compute **nCk** iteratively.

```cpp
ans = 1;

for(int i = 0; i < k; i++)
{
    ans = ans * (n - i);
    ans = ans / (i + 1);
}

return ans;
```

---

## Complexity

- **Time:** O(k)
- **Space:** O(1)

---

## Mistake / Learning

- ❌ Don't generate the complete Pascal Triangle for a single value.
- ✅ Convert `(r, c)` → `(n = r-1, k = c-1)`.
- ✅ Keep **n fixed**; only **i** changes.
- ✅ Use iterative **nCr** instead of factorial (avoids overflow and is faster).

---

## Revision Trick (30 sec)

One Value?

↓

`n = r - 1`

`k = c - 1`

↓

**nCr**

↓

`ans = ans × (n - i) / (i + 1)`
