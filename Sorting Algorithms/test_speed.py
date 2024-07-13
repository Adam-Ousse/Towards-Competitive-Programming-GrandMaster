import time
import random
from double_selection_sort import double_selection_sort
from selection_sort import selection_sort
from insertion_sort import insertion_sort
from quick_sort import quick_sort , quick_sort_version_2
from bucket_sort import bucket_sort
num_runs = 10
size = 1000000
def time_sorting_algorithm(sorting_algorithm, list_generator, num_runs=100, seed=42):
    total_time = 0
    random.seed(seed)

    for _ in range(num_runs):
        test_list = list_generator()
        start_time = time.time()
        sorting_algorithm(test_list)
        end_time = time.time()
        
        total_time += (end_time - start_time)
    
    average_time = total_time / num_runs
    return average_time

# Example usage
def random_list_generator(size=size, lower_bound=-10000, upper_bound=10000):
    return [random.uniform(lower_bound, upper_bound) for _ in range(size)]
print(f"Size : {size} elements")
# average_time_selection_sort = time_sorting_algorithm(selection_sort, random_list_generator,num_runs=num_runs)
# print(f"Selection sort : Average execution time over {num_runs} runs: {average_time_selection_sort:.6f} seconds")

# average_time_double_selection_sort = time_sorting_algorithm(double_selection_sort, random_list_generator,num_runs=num_runs)
# print(f"Double selection sort : Average execution time over {num_runs} runs: {average_time_double_selection_sort:.6f} seconds")

# average_time_insertion_sort = time_sorting_algorithm(insertion_sort, random_list_generator,num_runs=num_runs)
# print(f"Insertion sort : Average execution time over {num_runs} runs: {average_time_insertion_sort:.6f} seconds")

average_time_quick_sort = time_sorting_algorithm(quick_sort, random_list_generator,num_runs=num_runs)
print(f"Quick  sort : Average execution time over {num_runs} runs: {average_time_quick_sort:.6f} seconds")

# average_time_quick_sort_version_2 = time_sorting_algorithm(quick_sort_version_2, random_list_generator,num_runs=num_runs)
# print(f"Quick  sort Version 2 : Average execution time over {num_runs} runs: {average_time_quick_sort_version_2:.6f} seconds")

average_time_bucket_sort = time_sorting_algorithm(bucket_sort, random_list_generator,num_runs=num_runs)
print(f"Bucket  sort : Average execution time over {num_runs} runs: {average_time_bucket_sort:.6f} seconds")
