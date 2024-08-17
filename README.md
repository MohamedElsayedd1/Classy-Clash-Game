# Classy-Clash-Game
Classy Clash is an engaging action game developed using raylib. The game features a strategic blend of combat and movement, allowing players to navigate a rich environment while battling various enemies.

# Directory Layout

ClassyClash/
├── src/
│ ├── main.cpp
│ ├── Character.cpp
│ ├── Character.h
│ ├── Enemy.cpp
│ ├── Enemy.h
│ ├── Prop.cpp
│ ├── Prop.h
│ ├── BaseCharacter.cpp
│ └── BaseCharacter.h
├── assets/
│ ├── textures/
│ │ ├── nature_tileset/
│ │ │ ├── background.png
│ │ │ ├── rock.png
│ │ │ └── log.png
│ │ ├── characters/
│ │ │ ├── knight_idle_spritesheet.png
│ │ │ ├── knight_run_spritesheet.png
│ │ │ ├── goblin_idle_spritesheet.png
│ │ │ ├── goblin_run_spritesheet.png
│ │ │ ├── slime_idle_spritesheet.png
│ │ │ └── slime_run_spritesheet.png
│ │ └── weapon_sword.png
├── README.md
├── LICENSE
└── .gitignore

## Features

- **Character Movement**: Move the main character using keyboard controls.
- **Enemy AI**: Enemies track and attack the main character based on proximity.
- **Collision Detection**: Real-time collision detection between characters, props, and weapons.
- **Combat Mechanics**: Simple combat system allowing players to defeat enemies with a sword.

## Getting Started

To get started with Classy Clash, you'll need to have [raylib](https://www.raylib.com) installed. Follow these steps:

1. **Clone the Repository**:
    ```bash
    git clone https://github.com/MohamedElsayedd1/ClassyClash.git
    ```

2. **Navigate to the `src` Directory**:
    ```bash
    cd ClassyClash/src
    ```

3. **Compile and Run the Game**:
    - Ensure you have raylib installed and properly configured.
    - Use a C++ compiler to build the project. For example, with `g++`:
      ```bash
      g++ -o ClassyClash main.cpp Character.cpp Enemy.cpp Prop.cpp BaseCharacter.cpp -lraylib -lGL -lm -lpthread -ldl
      ```

4. **Run the Game**:
    ```bash
    ./ClassyClash
    ```

## Project Structure

- **`src/`**: Contains all the source code files including game logic, characters, enemies, and props.
- **`assets/`**: Contains textures and other assets used in the game.
- **`README.md`**: Provides an overview of the project.
- **`LICENSE`**: Details the licensing for the project.
- **`.gitignore`**: Specifies which files and directories should be ignored by Git.

## Contributing

We welcome contributions to Classy Clash! If you have suggestions, bug reports, or want to contribute code, please:

1. Fork the repository.
2. Create a new branch for your feature or fix.
3. Commit your changes and push to your fork.
4. Open a pull request with a description of your changes.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- [raylib](https://www.raylib.com) for providing a fantastic and easy-to-use game library.

For any questions or additional information, feel free to open an issue or contact the project maintainer.

Enjoy playing Classy Clash!

Certainly! Below is a detailed GitHub repository setup and description for your game "Classy Clash." This includes a README.md file, which provides an overview of the project, installation instructions, and how to contribute. 

### GitHub Repository Structure

**Directory Layout:**

```
ClassyClash/
├── src/
│   ├── main.cpp
│   ├── Character.cpp
│   ├── Character.h
│   ├── Enemy.cpp
│   ├── Enemy.h
│   ├── Prop.cpp
│   ├── Prop.h
│   ├── BaseCharacter.cpp
│   └── BaseCharacter.h
├── assets/
│   ├── textures/
│   │   ├── nature_tileset/
│   │   │   ├── background.png
│   │   │   ├── rock.png
│   │   │   └── log.png
│   │   ├── characters/
│   │   │   ├── knight_idle_spritesheet.png
│   │   │   ├── knight_run_spritesheet.png
│   │   │   ├── goblin_idle_spritesheet.png
│   │   │   ├── goblin_run_spritesheet.png
│   │   │   ├── slime_idle_spritesheet.png
│   │   │   └── slime_run_spritesheet.png
│   │   └── weapon_sword.png
├── README.md
├── LICENSE
└── .gitignore
```

### README.md

```markdown
# Classy Clash

Classy Clash is an engaging action game developed using raylib. The game features a strategic blend of combat and movement, allowing players to navigate a rich environment while battling various enemies.

## Features

- **Character Movement**: Move the main character using keyboard controls.
- **Enemy AI**: Enemies track and attack the main character based on proximity.
- **Collision Detection**: Real-time collision detection between characters, props, and weapons.
- **Combat Mechanics**: Simple combat system allowing players to defeat enemies with a sword.

## Getting Started

To get started with Classy Clash, you'll need to have [raylib](https://www.raylib.com) installed. Follow these steps:

1. **Clone the Repository**:
    ```bash
    git clone https://github.com/yourusername/ClassyClash.git
    ```

2. **Navigate to the `src` Directory**:
    ```bash
    cd ClassyClash/src
    ```

3. **Compile and Run the Game**:
    - Ensure you have raylib installed and properly configured.
    - Use a C++ compiler to build the project. For example, with `g++`:
      ```bash
      g++ -o ClassyClash main.cpp Character.cpp Enemy.cpp Prop.cpp BaseCharacter.cpp -lraylib -lGL -lm -lpthread -ldl
      ```

4. **Run the Game**:
    ```bash
    ./ClassyClash
    ```

## Project Structure

- **`src/`**: Contains all the source code files including game logic, characters, enemies, and props.
- **`assets/`**: Contains textures and other assets used in the game.
- **`README.md`**: Provides an overview of the project.
- **`LICENSE`**: Details the licensing for the project.
- **`.gitignore`**: Specifies which files and directories should be ignored by Git.

## Contributing

We welcome contributions to Classy Clash! If you have suggestions, bug reports, or want to contribute code, please:

1. Fork the repository.
2. Create a new branch for your feature or fix.
3. Commit your changes and push to your fork.
4. Open a pull request with a description of your changes.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- [raylib](https://www.raylib.com) for providing a fantastic and easy-to-use game library.

For any questions or additional information, feel free to open an issue or contact the project maintainer.

Enjoy playing Classy Clash!
```

### .gitignore

```gitignore
# Ignore object files and binaries
*.o
*.exe
*.out

# Ignore compiled files
*.a
*.lib

# Ignore temporary files
*.log
*.tmp
*.swp
```

### LICENSE

Here’s a sample MIT License text. You can replace this with the actual text from the [MIT License](https://opensource.org/licenses/MIT).

```text
MIT License

Copyright (c) [year] [your name]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```

### Setting Up the Repository

1. **Initialize the Repository:**
    ```bash
    git init
    ```

2. **Add and Commit Files:**
    ```bash
    git add .
    git commit -m "Initial commit"
    ```

3. **Create a New Repository on GitHub:**
   - Go to GitHub and create a new repository named `ClassyClash`.

4. **Push to GitHub:**
    ```bash
    git remote add origin https://github.com/yourusername/ClassyClash.git
    git push -u origin main
    ```

Replace `yourusername` with your GitHub username. This setup will give users a clear understanding of how to get started with your project, how to contribute, and the structure of your codebase. If you have any more questions or need further adjustments, feel free to ask!




