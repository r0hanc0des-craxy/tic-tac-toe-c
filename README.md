# 🎮 Tic-Tac-Toe in C

A simple **two-player Tic-Tac-Toe game written in C** and played directly in the terminal.

This project was created as a practice project while learning C programming and working with arrays, loops, conditions, and user input.

## 📌 Features

- 👥 Two-player gameplay
- ❌ Player X and ⭕ Player O take turns
- 🔢 Positions are selected using numbers `1`–`9`
- 🚫 Prevents players from selecting an occupied position
- ⚠️ Handles invalid positions
- 🏆 Detects winning combinations
- 🤝 Detects a draw
- 🔄 Continues playing until someone wins or the game ends in a draw

## 🎯 Board Layout

The positions are arranged like this:

```text
1 | 2 | 3
--+---+--
4 | 5 | 6
--+---+--
7 | 8 | 9
```

For example, entering `5` places the current player's symbol in the center.

## 🛠️ Concepts Used

This project helped practice:

- `char` arrays
- `while` loops
- `for` loops
- `if / else` statements
- Logical operators
- `scanf()`
- Array indexing
- Character comparison
- Input validation
- Win-condition checking
- Basic game logic

## ▶️ How to Run

Compile the program using a C compiler:

```bash
gcc tic_tac_toe.c -o tic_tac_toe
```

Then run:

```bash
./tic_tac_toe
```

On Windows:

```bash
tic_tac_toe.exe
```

## 🎮 How to Play

1. Player X starts the game.
2. Enter a position from `1` to `9`.
3. The selected position is replaced with your symbol.
4. Players take turns.
5. The first player to get three symbols in a row wins.
6. If all nine positions are filled without a winner, the game ends in a draw.

## 🧠 Win Conditions

A player wins by getting three of their symbols in:

- A horizontal row
- A vertical column
- A diagonal

The program checks all eight possible winning combinations after every valid move.

## 📂 Project Structure

```text
Tic-Tac-Toe/
│
├── tic_tac_toe.c
└── README.md
```

## 🚀 Future Improvements

Possible improvements for future versions:

- Add functions to make the code more modular
- Add a "Play Again" option
- Improve input handling for non-numeric input
- Add colored terminal output
- Add a single-player mode against the computer
- Add a scoreboard
- Improve the board display

## 👨‍💻 About

This is a beginner C programming project created for practice and learning.

**Language:** C  
**Project:** Tic-Tac-Toe  
**Version:** 1.0
