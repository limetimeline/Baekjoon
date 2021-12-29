# 38:18s

while True:
  temp1 = []
  temp2 = []
  num = input()
  if num == '0':
    break
  count = len(num)-1

  for i in range(len(num)):
    temp1.append(num[count])
    temp2.append(num[i])
    count -= 1

  if temp2 == temp1:
    print('yes')
  else:
    print('no')

