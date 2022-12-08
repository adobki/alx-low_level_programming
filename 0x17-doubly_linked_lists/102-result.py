#!/usr/bin/python3
def palindrome_number_generator(digits=2):
    """Generates all palindrome numbers for given number of digits.

    A palindromic number reads the same both ways. This function computes
    the palindromes by getting the products of all the number combinations
    for two numbers for the given number of digits. E.g.
            if digits == 2, products = [range(100)] * [range(100)]

    The largest palindrome made from the product of two 2-digit numbers is
    9009 = 91 × 99.

    :param digits: Maximum number of digits for each of the two operands.

    :return: Dictionary of generated palindrome numbers.
    """
    digits = 2 if digits < 2 else digits
    range_max, pal = 10 ** digits, {}

    for a in range(10, range_max):
        for b in range(1, range_max):
            c = a * b
            if str(c) == str(c)[::-1]:
                pal[c] = (a, b)

    return dict((key, pal[key]) for key in sorted(pal.keys())), digits


pal_num, pal_digits = palindrome_number_generator(3)
max_pal = list(pal_num.keys())[-1]
# print('{}\n'.format(max_pal))

print('Highest palindrome number for {} digits:'.format(pal_digits))
print('{} = {} * {}\n'.format(max_pal, pal_num[max_pal][0],
                              pal_num[max_pal][1]))

print('Top five results for {} digits:'.format(pal_digits))
for index, palindromes in enumerate(list(pal_num.keys())[-1:-6:-1]):
    print('{}) {}'.format(index + 1, palindromes))
