with open('./words.txt') as f:
    words = f.read().splitlines()
    words_sorted = ["".join(sorted(i.strip())) for i in words]

entered_word = "".join(sorted(input("Enter anagram to solve: ").strip()))
for i in range(len(words)):
    if words_sorted[i] == entered_word:
        print(words[i])
