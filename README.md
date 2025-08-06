# Boukerche Binary Search (BBS)

### 💡 Binary Search for the Unsorted Mind

**Boukerche Binary Search (BBS)** is an algorithmic trick that enables binary search on an initially unsorted array — while preserving access to the original element positions.

This technique was proposed by [Mohamed Boukerche](https://github.com/Mohamedboukerche22) to efficiently locate values using binary search after sorting, without losing track of their original indices.

---

## 🔍 Problem

Binary Search only works on sorted arrays.  
But what if the array is unsorted, and we want:
- Fast lookup of a target number using binary search
- To **return the original position** of the target (in the unsorted array)

---

## 🚀 Solution: BBS

Boukerche Binary Search works in 4 simple steps:

1. **Map** each element to its **original index**.
2. **Sort** the array by value, keeping index paired.
3. **Binary Search** on the sorted array.
4. Return the **original index** of the found value.

---

## 🧠 Algorithm

```cpp
vector<pair<int, int>> arr; // pair<value, original_index>

// Step 1: Fill array with value-index pairs
for (int i = 0; i < n; i++) {
    arr.push_back({nums[i], i});
}

// Step 2: Sort by value
sort(arr.begin(), arr.end());

// Step 3: Binary Search
int left = 0, right = n - 1;
while (left <= right) {
    int mid = (left + right) / 2;
    if (arr[mid].first == target) {
        return arr[mid].second; // Original index
    }
    else if (arr[mid].first < target) {
        left = mid + 1;
    } else {
        right = mid - 1;
    }
}
```
## 📦 Example
INPUT 
```
nums = [50, 10, 40, 30, 20]
target = 30
```
OUTPUT 
```
Target found at original index: 3
```
## ⏱️ Time Complexity
| Step          | Complexity     |
| ------------- | -------------- |
| Mapping       | O(n)           |
| Sorting       | O(n log n)     |
| Binary Search | O(log n)       |
| **Total**     | **O(n log n)** |



## 🧪 When to Use BBS
✅ You need to binary search in an unsorted array

✅ You care about original positions

✅ You are allowed to sort the array

✅ Useful in offline queries or index-preserving search

## 📚 Applications
- Competitive Programming

- Offline Range Queries

- Problems involving search with preserved order

- Sorting + Searching with metadata

##✍️ Author
Mohamed Boukerche

🏆 Young Algerian competitive programmer

🔗 GitHub: [Mohamedboukerche22](https://github.com/Mohamedboukerche22)
