import math


def func(num_buckets, length, buckets):
    buckets.sort(reverse=True)
    for i in range(num_buckets):
        if(length % buckets[i] == 0): 
            return (int(length / buckets[i]))
    return None

num_buckets, length = list(map(int, input().split()))
buckets = list(map(int, input().split()))

hours = func(num_buckets, length, buckets)

print(hours)

#hours * buckets[i] = length