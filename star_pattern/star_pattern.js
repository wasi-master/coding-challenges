var iterations = 0
var i = 0
const size = 15
while (iterations < size) {
    iterations += 1
    if (iterations <= size / 2) {
        i += 1
        process.stdout.write(" ".repeat(size - i))
        console.log("* ".repeat(i))
    }
    else {
        i -= 1
        process.stdout.write(" ".repeat(size - i))
        console.log("* ".repeat(i))
    }
}