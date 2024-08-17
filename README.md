# Classy Clash
Classy Clash is an engaging action game developed using raylib. The game features a strategic blend of combat and movement, allowing players to navigate a rich environment while battling various enemies.
<p align="center">
    <img src="https://github.com/MohamedElsayedd1/Classy-Clash-Game/blob/main/Gameplay%20Gif.gif" width="600" />
</p>

## Directory Layout:
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
     │   │   ├── characters/
     │   │   └── weapon_sword.png
     ├── README.md
     ├── LICENSE
     └── .gitignore
     ```
     
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
    git remote add origin https://github.com/MohamedElsayedd1/ClassyClash.git
    git push -u origin main
    ```



You've provided a substantial amount of C++ code for a game project called "Classy Clash" using the raylib library. This includes implementations for game characters, enemies, props, and main game logic. To share this project on GitHub and LinkedIn, follow these steps:

### GitHub Repository Setup

1. **Create a New Repository:**
   - Go to GitHub and create a new repository named `ClassyClash`.

2. **Repository Structure:**
   - Your repository should be organized to make it easy for others to understand and contribute. Here’s a suggested structure:

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
     │   │   ├── characters/
     │   │   └── weapon_sword.png
     ├── README.md
     ├── LICENSE
     └── .gitignore
     ```

   - Place all your `.cpp` and `.h` files in the `src` directory.
   - Organize your texture assets in the `assets` directory.

3. **Add a README.md:**
   - Create a `README.md` file to describe the project. Here's a basic template:

     ```markdown
     # Classy Clash

     Classy Clash is a strategic action game built using raylib. The game features various characters and enemies, with gameplay involving movement, combat, and collision detection.

     ## Features
     - Character and enemy movement
     - Collision detection
     - Simple combat mechanics

     ## Getting Started
     1. Clone the repository: `git clone https://github.com/yourusername/ClassyClash.git`
     2. Navigate to the `src` directory.
     3. Compile and run the game using raylib.

     ## Contributing
     Feel free to submit issues or pull requests. Contributions are welcome!

     ## License
     This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
     ```

4. **Add a .gitignore File:**
   - Create a `.gitignore` file to ignore unnecessary files. Here's an example:

     ```
     *.o
     *.exe
     *.out
     *.log
     ```

5. **Push Your Code to GitHub:**
   - Initialize git, commit your changes, and push to GitHub:

     ```bash
     git init
     git add .
     git commit -m "Initial commit"
     git branch -M main
     git remote add origin https://github.com/yourusername/ClassyClash.git
     git push -u origin main
     ```

### LinkedIn Post

Once your GitHub repository is set up, you can craft a LinkedIn post to share your project. Here’s a draft:

---

🚀 **Exciting News from the Classy Clash Development Team!** 🎮

We’re thrilled to share our latest project: **Classy Clash**, an engaging action game developed using raylib! Dive into a world where strategy meets excitement. Test your skills against various enemies and explore a beautifully crafted game world.

🔹 **Features:**
- Dynamic character and enemy interactions
- Intricate collision detection
- Immersive combat and movement mechanics

Check out our GitHub repository to explore the code, contribute, or simply get inspired. Your feedback and contributions are more than welcome!

🔗 [Classy Clash on GitHub](https://github.com/yourusername/ClassyClash)

Let’s make Classy Clash a game to remember! Feel free to share your thoughts and experiences.

#GameDevelopment #ClassyClash #Raylib #OpenSource #Gaming #CPlusPlus #GitHub #IndieDev

---

Feel free to adjust the content according to your specific details and preferences. If you need further customization or have any questions, let me know!

