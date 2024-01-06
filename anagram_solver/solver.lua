function read_lines(filename)
    local lines = {}
    for line in io.lines(filename) do
        table.insert(lines, line)
    end
    return lines
end

function sort_string(str)
    local chars = {}
    for i = 1, #str do
        table.insert(chars, str:sub(i, i))
    end
    table.sort(chars)
    return table.concat(chars)
end

local filename = './words.txt'
local words = read_lines(filename)

local words_sorted = {}
for i = 1, #words do
    table.insert(words_sorted, sort_string(words[i]:gsub("%s+", "")))
end

io.write("Enter an anagram to solve: ")
local entered_word = sort_string(io.read():gsub("%s+", ""))

for i = 1, #words do
    if words_sorted[i] == entered_word then
        print(words[i])
    end
end
