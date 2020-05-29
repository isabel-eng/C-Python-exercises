'''
1. Calculate the Euler constant e using the series:
https://wikimedia.org/api/rest_v1/media/math/render/svg/698f402ad56c5162a9280b6aaa8eb79acbc49550
'''
number = int(input("number: "))
sum = 0
x = 1
factorial = 1
#The sum variable will add all the divisions between [one] and the consecutive factorial up to the number entered by the user 
for i in range(1, number+2):
    sum = sum + (1/factorial)
    factorial *= i
print(round(sum, 2))