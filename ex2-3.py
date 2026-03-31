multiply = []

print("\n1~9의 정수를 입력하세요 : ")

while True:
    n = int(input())
    if n < 1 or n > 9:
        print("\n1~9의 정수를 입력하세요 : ")
    else:
        break

print("\n")
for i in range(9):
    result = n * (i + 1)
    multiply.append(result)
    print(f"{n} x {i + 1} = {result}")