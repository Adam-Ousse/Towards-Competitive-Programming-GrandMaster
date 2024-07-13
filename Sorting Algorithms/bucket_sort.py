from insertion_sort import insertion_sort
import random



#b number of buckets
def bucket_sort(l, b = 10):
    if len(l)<=1:
        return l
    b= len(l)//(min(len(l),100))
    l = l.copy()
    Min ,Max = min(l),max(l)
    bucket_range = (Max-Min)/b
    buckets = [[] for _ in range(b)]
    for a in l : 
        i = int((a-Min)//bucket_range)
        if i == b:
            i-=1
        buckets[i].append(a)
    sorted_l = []
    for bucket in buckets : 
        sorted_bucket=insertion_sort(bucket)
        sorted_l.extend(sorted_bucket)
    return sorted_l


    
if __name__ == '__main__':
    n = 10
    l= [random.randint(-1999,10000) for i in range(n)]
    sorted_l = bucket_sort(l)
    print(f'Unsorted list: {l}')
    print(f'Sorted list: {sorted_l}')
    correct=sorted_l==sorted(l)
    print(f'Correct: {correct}')
    