# -*- coding: utf-8 -*-
"""
Created on Sun Feb 14 11:55:17 2021

@author: vmalz
"""

##### If we list all the natural numbers below 10 that are multiples of 3 or 5,
##### we get 3, 5, 6 and 9. The sum of these multiples is 23.
##### Find the sum of all the multiples of 3 or 5 below 1000.#####3


total = []
first_multiple = input('First Multiple:')
first_multiple = int(first_multiple)
second_multiple = input('Second Multiple:')
second_multiple = int(second_multiple)

### building the boundary####

bounds = input('Between 0 and .....')
bounds = int(bounds)
bounds = bounds
#print(bounds)

factor_total = int()

### looping through the bounds ####

for i in range(bounds):
    numb = int(i)
    results = numb/first_multiple
    results = str(results)
    split_list = results.split('.')
    second_digit = split_list[1]
    second_digit = int(second_digit)
    if second_digit == 0:
        factor_one = i
        print('factor one', factor_one, '\n')
    else:
        factor_one = 0
    
    
    numb_2 = int(i)
    results = numb_2/second_multiple
    results = str(results)
    split_list = results.split('.')
    second_digit = split_list[1]
    second_digit = int(second_digit)
    if second_digit == 0:
        factor_two = i
        print('factor two', factor_two, '\n')
    else:
        factor_two = 0    
    
    if factor_two == factor_one:
        factor_two = 0
        
    round_total = factor_one + factor_two
    #print('round_total', round_total)
    factor_total += round_total

print(factor_total)
    
