import random
def insertion_sort(l):
    l = l.copy()
    for i in range(1,len(l)):
        current_element = l[i]
        j = i-1
        #shifting element to the right to give space
        while j>=0 and l[j]>current_element:
            l[j+1] = l[j]
            j-=1
        #inserting the current element in the right place
        l[j+1] = current_element
    return l

if __name__ == '__main__':
    n = 50
    l= [random.randint(1,100) for i in range(n)]
    sorted_l = insertion_sort(l)
    print(f'Unsorted list: {l}')
    print(f'Sorted list: {sorted_l}')
    correct=sorted_l==sorted(l)
    print(f'Correct: {correct}')