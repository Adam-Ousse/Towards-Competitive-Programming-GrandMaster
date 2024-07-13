![[Every Sorting Algorithm Explained in 120 minutes (full series) 21-28 screenshot.png]]
### Selection Sort :

find the smallest element in the unordered list and swap it with the first element of the unsorted list
smallest elemnt first, second smallest second .. etc
![[selection_sort.py]]

### Double selection sort:

2 pointers, smallest and largest elements.
then we swap the largest and smallest
this does half the number of iteration as the normal selection sort

```
Selection sort : Average execution time over 1000 runs: 0.048563 seconds
Double selection sort : Average execution time over 1000 runs: 0.019414 seconds
```

![[double_selection_sort.py]]

### Insertion sort :

It iterates through the array, comparing each element with the previous elements and inserting it into its correct position.
![[insertion_sort.py]]

### Quick sort :

It follows a divide and conquer method : it divides the list into 2 after choosing an element called **pivot** , one list smaller than the pivot A and one list bigger than the pivot B :
we sort each list, then the sorted list is A + pivot + B
![[quick_sort.py]]

### Bucket sort :

Bucket sort is a sorting algorithm that works by distributing the elements of an array into a number of buckets. Each bucket is then sorted individually, either using a different sorting algorithm or by recursively applying the bucket sort algorithm.
![[Pasted image 20240709170712.png]]
![[bucket_sort.py]]
