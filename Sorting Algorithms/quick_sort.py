import random

def quick_sort(l):
    l=l.copy()
    def partition(l,start,end):
        pivot = l[start]
        #Size : 100000 elements
        # Quick  sort : Average execution time over 100 runs: 0.186874 seconds
        i = start-1
        j = end+1
        while True:
            i+=1
            while l[i]<pivot:
                i+=1
            j-=1
            while l[j]>pivot:
                j-=1
            if i>=j:
                return j
            l[i],l[j] = l[j],l[i]
       
    def quick_sort_utils(l,start,end):
        if start<end:
            pivot_index = partition(l,start,end)
            quick_sort_utils(l,start,pivot_index)
            quick_sort_utils(l,pivot_index+1,end)
    quick_sort_utils(l,0,len(l)-1)
    return l  


def quick_sort_version_2(l):
    if len(l)<=1:
        return l
    pivot = l[0]
    left = [a for a in l[1:] if a<=pivot]
    right = [a for a in l[1:] if a>pivot]
    return quick_sort_version_2(left)+[pivot]+quick_sort_version_2(right)
    
    
if __name__ == '__main__':
    n = 10
    l= [random.randint(1,100) for i in range(n)]
    sorted_l = quick_sort(l)
    print(f'Unsorted list: {l}')
    print(f'Sorted list: {sorted_l}')
    correct=sorted_l==sorted(l)
    print(f'Correct: {correct}')
    