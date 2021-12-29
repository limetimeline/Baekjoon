# 알람 시계
# https://www.acmicpc.net/problem/2884

h,m = map(int,input().split())


if m<45:
    m = (m-45)+60
    h -= 1
    if h<0:
        h=23
else:
    m = m-45



print(h,m)