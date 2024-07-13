import random
def double_selection_sort(l):
    l = l.copy()
    a=0
    b = len(l)-1
    while a<b:
        min_index, max_index = a, b
        for i in range(a,b+1):
            if l[i]<l[min_index]:
                min_index = i
            if l[i]>l[max_index]:
                max_index = i
        l[min_index],l[a]= l[a],l[min_index]
        if max_index == a :
            max_index = min_index
        l[max_index],l[b] = l[b],l[max_index]
        a+=1
        b-=1
    return l
if __name__ == '__main__':
    n = 10
    l = [random.randint(-1000,1000) for i in range(n)]
    # l = [16, 32, 32, 32, 35, 46, 65, 65, 21, 99]
    sorted_l = double_selection_sort(l)
    print(f'Unsorted list: {l}')
    print(f'Sorted list: {sorted_l}')
    correct= sorted_l==sorted(l)
    print(f'Correct: {correct}')
