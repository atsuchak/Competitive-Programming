import sys
import math

def solve():
    t = int(sys.stdin.readline())
    for _ in range(t):
        n = int(sys.stdin.readline())
        a = list(map(int, sys.stdin.readline().split()))
        
        # Check if all elements are the same
        all_same = True
        first = a[0]
        for num in a:
            if num != first:
                all_same = False
                break
        if all_same:
            print("No")
            continue
        
        # Try to find a valid split
        found = False
        # Try putting each element alone in B and the rest in C
        for i in range(n):
            b = [a[i]]
            c = a[:i] + a[i+1:]
            gcd_b = b[0]
            for num in b[1:]:
                gcd_b = math.gcd(gcd_b, num)
            gcd_c = c[0]
            for num in c[1:]:
                gcd_c = math.gcd(gcd_c, num)
            if gcd_b != gcd_c:
                found = True
                # Prepare the output array
                output = [2] * n
                output[i] = 1
                print("Yes")
                print(' '.join(map(str, output)))
                break
        if not found:
            print("No")

solve()