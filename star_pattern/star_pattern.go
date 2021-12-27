package main

import (
    "fmt"
    "strings"
)

func main() {
    var iterations = 0
    var i = 0
    var size = 15
    for iterations < (size - 1) {
        iterations += 1
        if iterations <= size / 2{
            i += 1
            fmt.Print(strings.Repeat(" ", (size - i)))
            fmt.Println(strings.Repeat("* ", i))
        }else{
            i -= 1
            fmt.Print(strings.Repeat(" ", (size - i)))
            fmt.Println(strings.Repeat("* ", i))
        }
    }
}