# python
# problem : https://www.hackerrank.com/challenges/30-operators/problem

#!/bin/python3

import sys

if __name__ == "__main__":
    meal_cost = float(input().strip())
    tip_percent = int(input().strip())
    tax_percent = int(input().strip())
    total_cost = meal_cost + (meal_cost*(tip_percent+tax_percent))/100.;
    print("The total meal cost is " + str(int(round(total_cost))) + " dollars.")
    
