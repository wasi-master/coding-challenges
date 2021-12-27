iterations = 0
i = 0
size = 15
while (iterations < size)
do
    iterations = iterations + 1
    if (iterations <= size // 2)
    then
        i = i + 1
        io.write(string.rep(" ", (size - i)))
        print(string.rep("* ", i))
    else
        i = i - 1
        io.write(string.rep(" ", (size - i)))
        print(string.rep("* ", i))
    end
end