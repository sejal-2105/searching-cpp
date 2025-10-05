# searching-cpp


***

### **Experiment 1: Binary Search**

**Aim:** To implement and demonstrate the **Binary Search** algorithm for efficiently finding a target element within a **sorted** array (or vector).

**Theory:** **Binary Search** is a highly efficient search algorithm used to find an element in a sorted list. It works by repeatedly dividing the search interval in half.
* It starts by checking the element in the **middle** of the list.
* If the middle element is the **target**, the search is successful.
* If the target is **smaller** than the middle element, the search continues in the **lower** half.
* If the target is **larger**, the search continues in the **upper** half.
* This process continues until the element is found or the interval is empty. The crucial prerequisite is that the data must be **sorted**.

**Algorithm:**
1.  **Define `binarySearch` function:** Accepts a sorted vector `arr` and an integer `target`.
2.  Initialize `low` to $0$ and `high` to the last index of the array.
3.  Use a `while` loop that continues as long as `low <= high`.
4.  Calculate the `mid` index.
5.  **Compare:** If `arr[mid] == target`, return `mid` (found).
6.  If `arr[mid] < target`, the target is in the upper half, so set `low = mid + 1`.
7.  If `arr[mid] > target`, the target is in the lower half, so set `high = mid - 1`.
8.  If the loop finishes without finding the element, return $-1$.
9.  **In `main`:** Test the function with elements that are present (e.g., $34$) and not present (e.g., $7$) in the sorted array.

***

### **Experiment 2: Linear Search**

**Aim:** To implement and demonstrate the **Linear Search** algorithm for finding a target element by sequentially checking every element in an array (or vector).

**Theory:** **Linear Search** (or Sequential Search) is the simplest searching algorithm. It works by checking every element in the list one by one, from the beginning to the end, until the target value is found.
* It does **not** require the data to be sorted, making it suitable for any arrangement of data.
* The worst-case scenario is when the target element is the last element or not present at all, requiring $N$ comparisons (where $N$ is the size of the array).

**Algorithm:**
1.  **Define `linearSearch` function:** Accepts a vector `arr` and an integer `target`.
2.  Use a `for` loop to iterate through the array from the first index ($i=0$) up to the last index.
3.  **Compare:** Inside the loop, check if the current element `arr[i]` is equal to the `target`.
4.  If a match is found, immediately return the current index $i$.
5.  If the loop completes without finding the element, return $-1$.
6.  **In `main`:** Test the function with elements that are present (e.g., $42$) and not present (e.g., $99$) in the unsorted array.

***

### **Conclusion**

These experiments clearly differentiate between two fundamental search techniques. **Linear Search** is simple and universally applicable but inefficient for large lists. **Binary Search** is highly efficient ($\mathcal{O}(\log n)$ time complexity) but requires the critical prerequisite of the data being **sorted**.
