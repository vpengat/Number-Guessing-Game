#  Number Guessing Game – C Language

Welcome to a fun little terminal-based game I created in **C**!

This project was a great way to improve my understanding of control flow, loops, conditionals, and working with random numbers. It's simple, but it helped me practice writing clean logic and getting better with core C programming.

---

##  For Technical Reviewers

###  What the Program Does:
- Uses `rand()` and `srand()` to generate a random number between 1 and 100
- Prompts the user to guess the number through the terminal
- Tracks the number of guesses
- Uses a `do...while` loop and `if/else` conditions to give feedback on each guess:
  - If the guess is **too low**, it tells the user.
  - If the guess is **too high**, it lets them know.
  - If the guess is **correct**, it congratulates the user and shows how many tries it took.

###  Concepts Covered:
- Random number generation with `rand()` and `time(NULL)`
- Input and output using `scanf()` and `printf()`
- Basic control structures: loops (`do...while`) and conditionals (`if`, `else`)
- Using variables and counting attempts

###  How to Run:
1. Copy the code into a file named `guess.c`
2. Compile the program:

```bash
gcc guess.c -o guess
