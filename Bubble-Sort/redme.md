# Bubble Sort - Step-by-Step Guide and Explanation

This repository provides a detailed guide on the **Bubble Sort** algorithm, demonstrating its operation on the example array `[4, 1, 5, 2, 3]`. Below, you'll find a step-by-step breakdown of all comparisons (including those that don't result in swaps), pseudocode, and an explanation of the algorithm's logic with a dry run perspective.

---

## 🔹 Initial Array
**`[4, 1, 5, 2, 3]`** (Size = 5)

---

## 🔹 Step-by-Step Sorting Process (Dry Run)

Bubble Sort works by repeatedly stepping through the list, comparing adjacent elements, and swapping them if they are in the wrong order. After each pass, the largest unsorted element "bubbles up" to its correct position at the end of the array. The table below shows all comparisons, including those where no swap is needed, simulating a dry run of the algorithm.

| Pass (`i`) | Comparison Index (`j`) | Array Status (Before Comparison) | Comparison | Swap Performed | Array After Comparison | Largest Element Placed |
|------------|-------------------------|----------------------------------|-------------|----------------|-------------------------|-------------------------|
| `i = 0`    | `j = 0`                | **4 1 5 2 3**                   | `4 > 1`     | `[4, 1] → Swap` | **1 4 5 2 3**           |                         |
| `i = 0`    | `j = 1`                | **1 4 5 2 3**                   | `4 < 5`     | No Swap         | **1 4 5 2 3**           |                         |
| `i = 0`    | `j = 2`                | **1 4 5 2 3**                   | `5 > 2`     | `[5, 2] → Swap` | **1 4 2 5 3**           |                         |
| `i = 0`    | `j = 3`                | **1 4 2 5 3**                   | `5 > 3`     | `[5, 3] → Swap` | **1 4 2 3 5**           | **5 (Position 4)**      |
| `i = 1`    | `j = 0`                | **1 4 2 3 5**                   | `1 < 4`     | No Swap         | **1 4 2 3 5**           |                         |
| `i = 1`    | `j = 1`                | **1 4 2 3 5**                   | `4 > 2`     | `[4, 2] → Swap` | **1 2 4 3 5**           |                         |
| `i = 1`    | `j = 2`                | **1 2 4 3 5**                   | `4 > 3`     | `[4, 3] → Swap` | **1 2 3 4 5**           |                         |
| `i = 1`    | `j = 3`                | **1 2 3 4 5**                   | `4 < 5`     | No Swap         | **1 2 3 4 5**           | **4 (Position 3)**      |
| `i = 2`    | `j = 0`                | **1 2 3 4 5**                   | `1 < 2`     | No Swap         | **1 2 3 4 5**           |                         |
| `i = 2`    | `j = 1`                | **1 2 3 4 5**                   | `2 < 3`     | No Swap         | **1 2 3 4 5**           |                         |
| `i = 2`    | `j = 2`                | **1 2 3 4 5**                   | `3 < 4`     | No Swap         | **1 2 3 4 5**           | **3 (Position 2)**      |
| `i = 3`    | `j = 0`                | **1 2 3 4 5**                   | `1 < 2`     | No Swap         | **1 2 3 4 5**           |                         |
| `i = 3`    | `j = 1`                | **1 2 3 4 5**                   | `2 < 3`     | No Swap         | **1 2 3 4 5**           | **2 (Position 1)**      |
| `i = 4`    | `j = 0`                | **1 2 3 4 5**                   | `1 < 2`     | No Swap         | **1 2 3 4 5**           | **1 (Position 0)**      |

✅ **Final Sorted Array:** **`[1, 2, 3, 4, 5]`**

---

## 🔹 Algorithm Logic

- **Array Size (`n`):** The array `[4, 1, 5, 2, 3]` has 5 elements, so `n = 5`.
- **Outer Loop (`i`):** Runs from `0` to `size - 1` (i.e., `0` to `4`), resulting in 5 passes for an array of size 5.
- **Inner Loop (`j`):** For each pass `i`, the inner loop runs from `0` to `size - i - 1`. This ensures that we only compare elements in the unsorted portion of the array. All comparisons are shown, with swaps occurring only when `array[j] > array[j + 1]`.
- **Comparisons per Pass:** Determined by the formula **`size - i - 1`**:
  - `i = 0`: `5 - 0 - 1 = 4` comparisons (`j` from 0 to 3)
  - `i = 1`: `5 - 1 - 1 = 3` comparisons (`j` from 0 to 2)
  - `i = 2`: `5 - 2 - 1 = 2` comparisons (`j` from 0 to 1)
  - `i = 3`: `5 - 3 - 1 = 1` comparison (`j` = 0)
  - `i = 4`: `5 - 4 - 1 = 0` comparisons (loop doesn't run, but we show the pass for clarity)

This ensures that after each pass, the largest remaining unsorted element is placed at the end, reducing the number of elements to compare in the next pass.

---

## 🔹 Updated Pseudocode

The pseudocode is updated to reflect the array size and the logic of the loops:

```plaintext
n = 5  // Size of the array
for i = 0 to n - 1
    for j = 0 to n - i - 1
        if array[j] > array[j + 1]
            swap array[j] and array[j + 1]