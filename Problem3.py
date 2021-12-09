# -*- coding: utf-8 -*-
"""
Created on Thu Feb 18 15:16:51 2021

@author: vmalz
"""
##### Variables ####

prime_list = []
result_list = []

target_number = input('Target number....?  ')
target_number = int(target_number)

range_of_prime_numbers = input('Prime range? ')
range_of_prime_numbers = int(range_of_prime_numbers)

prime_range_list = list(range(range_of_prime_numbers + 1))
prime_range_list = prime_range_list[1:]


##### generate primes ######

for i in prime_range_list:
    working_number = int(i)
    
    for i in range(2,range_of_prime_numbers):
        results = working_number/i
        if results % 1 == 0:
            if working_number != i: break
            #print(working_number,i)
            prime_list.append(working_number)




##### Divide target number by pime list ######2

for i in prime_list:
    divisor = i
    results = target_number/divisor
    if results % 1 == 0:
        target_number = results
        #print(i, target_number)
        result_list.append(i)
    
print(result_list)    
