# What is this project?

This project is to make a program that prints a star-like pattern on the console

## Goal

Print a star pattern like so:

```
      * 
     * *      
    * * *     
   * * * *
  * * * * *
 * * * * * *
* * * * * * *
 * * * * * *
  * * * * *
   * * * *
    * * *
     * *
      *
```

## Screenshot

![python](https://i.ibb.co/RGK8dpT/image.png)

## Code size

Here's a list with the size of the files in each language (1 byte = 1 character)

|Language |File size |
|-------- |--------- |
| Python |![Could not be loaded](https://img.shields.io/github/size/wasi-master/coding-challenges/star_pattern/star_pattern.py?color=%233572a5&label=%E2%80%8D&logo=python)|\
| Javascript |![Could not be loaded](https://img.shields.io/github/size/wasi-master/coding-challenges/star_pattern/star_pattern.js?color=%23f1e05a&label=%E2%80%8D&logo=javascript)|\
| C |![Could not be loaded](https://img.shields.io/github/size/wasi-master/coding-challenges/star_pattern/star_pattern.c?color=%23a8b9cc&label=%E2%80%8D&logo=c)|\
| C++ |![Could not be loaded](https://img.shields.io/github/size/wasi-master/coding-challenges/star_pattern/star_pattern.cpp?color=%23f34b7d&label=%E2%80%8D&logo=cplusplus)|\
| C# |![Could not be loaded](https://img.shields.io/github/size/wasi-master/coding-challenges/star_pattern/StarPattern.cs?color=%23178600&label=%E2%80%8D&logo=csharp)|\
| Rust |![Could not be loaded](https://img.shields.io/github/size/wasi-master/coding-challenges/star_pattern/star_pattern.rs?color=%23dea584&label=%E2%80%8D&logo=rust)|\
| Java |![Could not be loaded](https://img.shields.io/github/size/wasi-master/coding-challenges/star_pattern/StarPattern.java?color=%23b07219&label=%E2%80%8D&logo=java)|\
| Ruby |![Could not be loaded](https://img.shields.io/github/size/wasi-master/coding-challenges/star_pattern/star_pattern.rb?color=%23701516&label=%E2%80%8D&logo=ruby)|\
| Go |![Could not be loaded](https://img.shields.io/github/size/wasi-master/coding-challenges/star_pattern/star_pattern.go?color=%2300add8&label=%E2%80%8D&logo=go)|\
| Lua |![Could not be loaded](https://img.shields.io/github/size/wasi-master/coding-challenges/star_pattern/star_pattern.lua?color=%23000080&label=%E2%80%8D&logo=lua)|

## Implementation

pseudo-code:

```prolog
/*An pseudo code implementation*/
CREATE VARIABLE CALLED iterations WITH VALUE OF 0
CREATE VARIABLE CALLED starcount WITH VALUE OF 0
CREATE VARIABLE CALLED size WITH VALUE OF 15

WHILE iterations IS SMALLER THAN size:
    INCREMENT iterations BY 1

    IF iterations IS LESS THAN OR EQUAL TO size INTEGER DIVIDED BY 2:
        INCREMENT starcount BY 1
        PRINT AN space REPEATED size - 1 TIMES and dont add a new line
        PRINT AN star FOLLOWED BY a space REPEATED starcount TIMES

    IF iterations IS GREATER THAN size INTEGER DIVIDED BY 2:
      DECREMENT starcount BY 1
      PRINT AN space REPEATED size - 1 TIMES AND DONT ADD A NEW LINE
      PRINT AN * FOLLOWED BY a space REPEATED starcount TIMES
        
```

If there isn't a way to repeat a string in the standard library of a language then we make a custom function to do that
