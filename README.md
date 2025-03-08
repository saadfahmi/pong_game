# 🎮 Pong Game (SDL2)

A simple Pong game built using SDL2, showcasing basic graphics, audio, and gameplay logic.

---

## 🚀 Getting Started

# 🎮 Pong Game (SDL2)

A simple Pong game built using SDL2, showcasing basic graphics, audio, and gameplay logic.

---

## 🚀 Getting Started

### 📂 Project Structure

```text
pongg
│
├── mmain.exe             # Game executable
├── main.c                # Source code
│
├── src
│   ├── include
│   │   └── SDL2          # SDL2 header files (.h)
│   └── lib
│       ├── cmake         # CMake build configuration files
│       └── pkgconfig     # SDL2 configuration files (.pc)
│
├── lib                   # SDL2 compiled libraries (.a, .dll.a)
│   ├── cmake             # CMake files
│   ├── pkgconfig         # SDL2 package config files (.pc)
│   ├── libSDL2.dll.a   
│   ├── libSDL2main.a
│   ├── libSDL2_image.a
│   ├── libSDL2_mixer.a
│   └── libSDL2_ttf.a
│
├── SDL2.dll
├── SDL2_image.dll
├── SDL2_mixer.dll
├── SDL2_ttf.dll
└── README.md
```

##  📌 Requirements

- **SDL2** (`SDL2.dll`)
- **SDL2_image** (`SDL2_image.dll`)
- **SDL2_mixer** (`SDL2_mixer.dll`)
- **SDL2_ttf** (`SDL2_ttf.dll`)
- **src**(`include, lib`)
- **download SDL2 (https://github.com/libsdl-org/SDL/releases/tag/release-2.30.12)**


Make sure all DLLs are placed in the same directory as `mmain.exe`.

---

## 🎯 How to Run

Launch the game with:

```bash
git clone https://github.com/saadfahmi/pong-game
cd pong-game
code .
./mmain.exe
```


