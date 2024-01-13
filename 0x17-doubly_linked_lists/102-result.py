#!/usr/bin/python3
def is_palindrome(n):
    return str(n) == str(n)[::-1]

def largest_palindrome(n):
    max_palindrome = 0
    for i in range(n, 100, -1):
        for j in range(n, 100, -1):
            product = i * j
            if is_palindrome(product) and product > max_palindrome:
                max_palindrome = product
    return max_palindrome

with open("102-result", "w") as f:
    f.write(str(largest_palindrome(999)))
