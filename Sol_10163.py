# miss
# 색종이
# https://www.acmicpc.net/problem/10163

plate = []

for i in range(1010):
  temp = []
  for j in range(1010): 
    temp.append(0)
  plate.append(temp)

num = int(input())

paper = []

for i in range(num):
  paper.append(input().split())

for i in range(len(paper)):
  temp = []
  

for i in range(len(paper)):
  plate[int(paper[i][0])][int(paper[i][1])] = i+1
  for j in range(int(paper[i][2])):
    for k in range(int(paper[i][3])):
      plate[int(paper[i][0])+j][int(paper[i][1])+k] = i+1

for k in range(len(paper)):
  count = 0
  for i in range(len(plate)):
    for j in range(len(plate[0])):
      if plate[i][j] == (k+1):
        count += 1
  
  # print(count)

