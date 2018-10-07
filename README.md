### Algorithms

## Sorting Algorithms

A: List or an array of elements.


# Bubble Sort
```Bubblesort(A)
    Size = length(A)
    for i = 0 to Size-1 do
      for j = 0 to Size-i-1 do
        if A[j] > A[j+1] do
          swap A[j] and A[j+1]
        end if
      end for
    end for
    return A
```
Worst Case: О(n^2) <br />
Best Case: O(n) <br />
Average Case: O(n^2) <br />

# Insertion Sort
```insertionsort(A)
    Size = length(A)
    for i = 1 to Size do
      val = A[i]
      hole = i
      while hole > 0 and A[hole - 1] > val then
        A[hole] = A[hole - 1]
        hole = hole - 1
      end while
    end for
    return A
```  
Worst Case: O(n^2) <br />
Best Case: O(n) <br />
Average Case: O(n^2) <br />

# Merge Sort
```mergeHalves(A, leftstart, mid, rightend)
    n1 = mid - leftstart + 1
    n2 = right
    left = []
    right = []
    for i = 0 to n1 do
      left.append(A[leftstart + i])   #To add elements to left array.
    end for
    for i = 0 to n2 do
      right.append(A[mid + 1 + i])    #To add elements to right array.
    end for
    k = leftstart, i = 0, j = 0
    while i < n1 and j < n2 then
      if left[i] <= right[j] then
        A[k] = left[i]
        k = k + 1, i = i + 1
      else
        A[k] = right[j]
        k = k + 1, j = j + 1
      end else
      end if
    end while
    while i < n1 do
      A[k] = left[i]
      k = k + 1, i = i + 1
    end while
    while j < n2 do
      A[k] = right[j]
      k = k + 1, j = j + 1
    end while


  merge_sort(A, leftstart, rightend)
    if leftstart >= rightend then
      return
    end if
    mid = (leftstart + rightend) / 2
    merge_sort(A, leftstart, mid)
    merge_sort(A, mid + 1, rightend)

    mergeHalves(A, leftstart, mid, rightend)
```

Worst Case: O(n logn)<br />
Best Case: O(n logn) Typical, O(n) natural variant.<br />
Average Case: O(n logn)<br />

# Quick Sort

```partition(A, start, end)
    pivot = A[end]
    partitionIndex = start
    for i = start to end do
      if A[i] <= pivot then
        swap(A[i], A[partitionIndex])
        partitionIndex = partitionIndex + 1
      end if
    end for
    swap(A[partitionIndex], A[end])
    return A


  quick_sort(A, start, end)
    if start < end do
      partitionIndex = partition(A, start, end)
      quick_sort(A, start, partitionIndex - 1)
      quick_sort(A, partitionIndex + 1, end)
    end if
    return A
```

Worst Case: O(n^2)<br />
Best Case: O(n logn)<br />
Average Case: O(n logn)<br />

# Selection Sort

```select_sort(A)
    Size = length(A)
    for i = 0 to Size - 1 do
      minIndex = i
      for j = i + 1 to Size - 1 do
        if A[j] > A[minIndex] then
          minIndex = j
        end if
      end for
    swap A[i] and A[minIndex]
    return A
```

Worst Case: O(n^2)<br />
Best Case: O(n^2)<br />
Average Case: O(n^2)<br />
