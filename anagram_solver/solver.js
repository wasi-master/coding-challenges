const fs = require('fs');
const readline = require('readline');

const rl = readline.createInterface({ input: process.stdin, output: process.stdout });

f = fs.readFile('./words.txt',
    function (err, f) {
        words = f.toString().split("\r\n")
        sortedWords = words.map(text => text.split('').sort().join(''), words)
        rl.question('Enter anagram to solve: ', function (userInput) {
            sortedUserInput = userInput.split('').sort().join('')
            for (var i = 0; i < sortedWords.length; i++) {
                if (sortedWords[i] == sortedUserInput) {
                    console.log(words[i])
                }
            }
            process.exit(0)
        })
    }
);