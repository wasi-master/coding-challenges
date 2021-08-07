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

## Implementation

pseudo-code:

```prolog
/*An pseudo code implementation*/
CREATE VARIABLE CALLED iterations WITH VALUE AS 0
CREATE VARIABLE CALLED starcount WITH VALUE AS 0
CREATE VARIABLE CALLED size WITH VALUE AS 15

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

If there isn't a way to repeat a string in the standard library of a language then we make one
