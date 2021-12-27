iterations = 0
i = 0
size = 15
until iterations == (size - 1) do
    iterations += 1
    if iterations <= size / 2
        i += 1
        print " " * (size - i)
        puts "* " * i
    else
        i -= 1
        print " " * (size - i)
        puts "* " * i
    end
end
