iterations = 0
i = 0
size = 15
while iterations < size:
    iterations += 1
    if iterations <= size // 2:
        i += 1
        print(" " * (size - i), end="")
        print("* " * i)
    else:
        i -= 1
        print(" " * (size - i), end="")
        print("* " * i)
