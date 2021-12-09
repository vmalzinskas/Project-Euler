# -*- coding: utf-8 -*-
"""
Created on Wed Feb 17 14:03:38 2021

@author: vmalz
"""


#### Variables #####

number_list = []
number_list_length = input('length?.... ')
number_list_length = int(number_list_length)     
first_number = 1
second_number = 2       
list_limit = input('limiting value?.... ')
list_limit = int(list_limit)
           
###### generate the  fibonacci number list ###



for i in range(number_list_length):
    
    first_number = str(first_number)
    number_list.append(first_number)
    first_number = int(first_number)
    
    second_number = str(second_number)
    number_list.append(second_number)
    second_number = int(second_number)
    
    first_number = first_number + second_number
    
    second_number = first_number + second_number
    
    if first_number > list_limit: break
    if second_number > list_limit: break
        
#print(number_list)


####### Clearing list of odd numbers. ########

####### variables

even_list = []
odd_list = []

##################

for i in range(len(number_list)):
    
    if len(number_list) == 0: break
    odd_list.append(number_list[0])
    del number_list[0]
    
    if len(number_list) == 0: break
    even_list.append(number_list[0])
    del number_list[0]
    
    if len(number_list) == 0: break
    odd_list.append(number_list[0])
    del number_list[0]
    
        
    if len(number_list) == 0: break
    
########################   
 
###### Variables
sum_total = int()    
##### Summing the list

for i in range(len(even_list)):
    sum_total += int(even_list[i])
    
print(sum_total)
