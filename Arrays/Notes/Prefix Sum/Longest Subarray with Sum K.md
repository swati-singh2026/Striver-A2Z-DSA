# Longest Subarray with Sum K

## Pattern

- Prefix Sum + HashMap

## Recognition Clues

- Longest Subarray
- Sum = K
- Negative numbers are present
- Need Optimal O(n)

## Key Observation

- Current Prefix - Old Prefix = K
- Old Prefix = Current Prefix - K

## Algorithm

1. Calculate the running Prefix Sum.
2. If `prefixSum == K`, update the answer.
3. Search `(prefixSum - K)` in the HashMap.
4. If found, calculate the current subarray length and update the maximum length.
5. Store the Prefix Sum only if it appears for the first time.

## Why First Occurrence?

- The earliest index gives the **longest possible subarray**.

## Edge Cases

- `prefixSum == K` → Subarray starts from index `0`.
- No valid subarray → Return `0`.
- Duplicate Prefix Sums → Store only the first occurrence.

## Complexity

- **Time:** `O(n)`
- **Space:** `O(n)`

## Memory Trick

> **Prefix → Prefix-K → First Occurrence → Update Longest Length**

## Learning

- Negative numbers make Sliding Window invalid.
- Prefix Sum + HashMap is the optimal approach.
- Store only the first occurrence of each Prefix Sum to maximize the subarray length.
