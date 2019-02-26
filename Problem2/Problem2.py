import math
import time

def fibonacci(n):
    return int((1.0/math.sqrt(5))*((1.0 + math.sqrt(5))/2.0)**n - (1.0/math.sqrt(5))*((1.0 - math.sqrt(5))/2.0)**n)


def main():
    start_time = time.time()

    n = 2
    fn = 1
    suma = 0

    while fn < 4000000:
        if fn%2 == 0:
            suma +=fn
        fn = fibonacci(n)
        if fn > 4000000:
            break
        #print fn
        n = n+1

    print("--- %.15f seconds ---" % (time.time() - start_time))

    print suma

if __name__ == '__main__':
    main()
