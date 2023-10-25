# * Author:Muhammad Xayrullayev
# * Date:25.10.2023

import random

def task3_function():
    while True:
        A = int(input("Please provide me with a number and I will show you what arithmetic can do!: "))
        if A == 0:
            print("Arithmetic is a cool thing, but it doesn't allow dividing by zero :)")
        else:
            large_number = random.randint(10**99, 10**100 - 1)
            result = large_number / A
            print("Result of the division:", result)
            break

if __name__ == "task_3":
    task3_function()
