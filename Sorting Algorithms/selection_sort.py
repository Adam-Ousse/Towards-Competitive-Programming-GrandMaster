import random
def selection_sort(l):
    l = l.copy()
    for i in range(len(l)):
        min_index=  i
        for j in range(i,len(l)):
            if(l[j]<l[min_index]):
                min_index = j
        l[i],l[min_index] = l[min_index],l[i]
    return l
if __name__ == '__main__':
    n = 50
    l= [random.randint(1,100) for i in range(n)]
    sorted_l = selection_sort(l)
    print(f'Unsorted list: {l}')
    print(f'Sorted list: {sorted_l}')
    correct=sorted_l==sorted(l)
    print(f'Correct: {correct}')
    