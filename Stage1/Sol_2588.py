# 곱셈
# https://www.acmicpc.net/problem/2588

A = int(input())
B = int(input())
print(B%10 * A)
print(int((B%100-B%10)/10) * A)
print(int(((B%1000)-(B%100))/100)*A)
print(A*B)