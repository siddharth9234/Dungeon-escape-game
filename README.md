🏰 Dungeon Escape

A grid-based survival game featuring a pure C systems backend and an interactive, responsive web frontend.

🚀 About the Project

This project follows a strict "first-principles" separation of concerns:

Backend Logic (monster.c): Developed by Siddharth. It handles low-level matrix management (12x22), coordinate structs, random seed generation (srand), player movement inputs (W/A/S/D), and strict game win/loss/collision conditions.

Frontend UI (index.html): Developed by Gemini to faithfully mirror the C engine logic in a modern browser environment complete with desktop keyboard support and mobile touch controls.

🎮 Game Rules & Mechanics

Map Size: 12x22 grid surrounded by walls (#).

Player (O): Spawns randomly; objective is to escape to the exit coordinate at [11][20].

Monster (*): Relocates randomly every turn, leaving behind trap tokens (1).

Win Condition: Reach the exit door safely.

Lose Conditions: Hit a wall, get eaten by the monster/trap, or have the monster reach the exit door first.

🛠️ How to Run Locally

1. Compile & Run the C Backend (Terminal)

gcc monster.c -o monster
./monster


2. Run the Web Frontend (Browser)

Simply open index.html in any web browser, or play it live online via GitHub Pages:
Play Dungeon Escape Live

💻 Tech Stack

Backend: Pure C (<stdio.h>, <stdlib.h>, <string.h>, <time.h>)

Frontend: HTML5, Tailwind CSS, Vanilla JavaScript (ES6)

Deployment: GitHub Pages
