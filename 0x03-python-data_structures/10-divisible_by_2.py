#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    sec_list = []
    if my_list:
        for num in my_list:
            sec_list.append(False if num % 2 else True)
        return sec_list
