
### **Step-by-Step Sorting:**
| Pass | Comparisons | Array After Pass |
|------|------------|-----------------|
| `i = 0` | 4 | **3 5 11 18 99** |
| `i = 1` | 3 | **3 5 11 18 99** |
| `i = 2` | 2 | **3 5 11 18 99** |
| `i = 3` | 1 | **3 5 11 18 99** |

✅ The array is now sorted!

---

## **🔹 Why `size - i - 1` in Inner Loop?**
- **Total comparisons decrease after each pass.**
- The largest element is placed at the correct position in each pass.
- We do **`size - i - 1`** comparisons in each outer loop iteration:
  - **i = 0:** `5 - 0 - 1 = 4` comparisons  
  - **i = 1:** `5 - 1 - 1 = 3` comparisons  
  - **i = 2:** `5 - 2 - 1 = 2` comparisons  
  - **i = 3:** `5 - 3 - 1 = 1` comparison  

Total passes = **size - 1**

---
