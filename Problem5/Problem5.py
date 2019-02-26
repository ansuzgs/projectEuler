def gcd(a,b):
    while b:
        a,b = b, a%b
    return a

def lcm(a,b):
    return a*b/gcd(a,b)

def main():
    print reduce(lcm, range(1,20))



if __name__ == '__main__':
    main()
