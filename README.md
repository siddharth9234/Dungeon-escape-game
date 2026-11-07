# 🏰 Dungeon Escape — C Backend Game Engine

A high-performance, grid-based survival game engine written in pure C. Designed with a modular architecture separating core state management, matrix coordination, and collision logic from presentation layers.

---

## 🚀 Architectural Overview

- **Engine Core (`monster.c`)**: Native C implementation managing a `12x22` game matrix.
- **State & Memory Management**: Utilizes custom coordinate structs (`coor pl, mo, move`) for real-time player and monster tracking.
- **Procedural Mechanics**: Implements pseudo-random spawn generation using `srand(time(NULL))` and dynamic trap memory allocation (`c[x][y]=1`).
- **Event Loop & Safety**: Clean state evaluation handling wall boundary collisions, win conditions at coordinate `[11][20]`, and active hunt/trap loops.

---

## 🎮 Game Rules & Mechanics

- **Grid Size**: `12x22` map bordered by walls (`#`).
- **Player (`O`)**: Spawns randomly; navigates via standard directional inputs (`W/A/S/D`) to reach the exit gate at `[11][20]`.
- **Monster (`*`)**: Relocates randomly each turn, leaving behind active hazard traps (`1`).
- **Conditionals**:
  - **Loss**: Striking boundaries, colliding with a trap/monster, or getting intercepted before reaching the exit.
  - **Win**: Successfully navigating to coordinate `[11][20]`.

---

## 🛠️ Compilation & Execution

Clone the repository and compile the C source file using any standard C compiler (e.g., GCC):

```bash
# Clone repository
git clone [https://github.com/siddharth9234/Dungeon-escape-game.git](https://github.com/siddharth9234/Dungeon-escape-game.git)
cd Dungeon-escape-game

# Compile the C engine
gcc monster.c -o dungeon_escape

# Run the game engine
./dungeon_escape


[![Play Live in Browser](https://img.shields.io/badge/Play-Live%20Demo-brightgreen)](https://siddharth9234.github.io/Dungeon-escape-game/)
