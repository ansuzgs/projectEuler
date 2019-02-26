import time

start_time = time.time()

n = 0
n_max = 10000
sum = 0

while n < n_max:
    if n%3==0 or n%5==0:
        sum = sum + n
    n = n+1

print("--- %10s seconds ---" % (time.time() - start_time))
print sum
