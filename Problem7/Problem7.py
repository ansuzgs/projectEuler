
primes = []
i = 1
count = 0

while count < 10001:
    i = i + 1
    isPrime = True
    for num in primes:
        if i%num ==0:
            isPrime = False

    if isPrime:
        primes.append(i)
        count += 1

print primes[-1]
