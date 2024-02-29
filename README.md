# Epitech R-Type Project

## Introduction

This project is part of the Advanced C++ knowledge unit at Epitech. It involves developing a networked version of the R-Type game, a Horizontal Shmup (Shoot’em’up), and building a custom game engine. The goal is to implement a multithreaded server and a graphical client, demonstrating advanced development techniques and good software engineering practices.

## R-Type Game Overview

R-Type is a well-known video game from the 90s, categorized as a Horizontal Shmup. The project requires creating a networked version of R-Type, where one-to-four players can collaborate in fighting against the evil Bydos. Additionally, the internal design of the game must showcase architectural patterns of a real game engine.

## Project Organization

The project is divided into three parts:

1. **Part 0: Software Engineering and Documentation**
   - Defines Software Engineering and Documentation requirements.
   - Includes continuous efforts in technical documentation, build system tooling, handling 3rd-party dependencies, cross-platform support, version control workflow, and packaging.

2. **Part 1: Software Architecture & First Game Prototype**
   - Develops the core foundations and software architecture of the networked game engine.
   - Delivers a working R-Type game prototype.
   - Deadline: 4 weeks after the beginning of the project.

3. **Part 2: Advanced Topics**
   - Enhances different aspects of the prototype.
   - Chooses from three technical tracks: Advanced Software Architecture, Advanced Networking, and/or Advanced Gameplay and Game Design.
   - Deadline: 3 weeks after the first delivery, totaling 7 full weeks for the whole project.

## Part 0: Software Engineering and Documentation Requirements

### Software Engineering Requirements
- Uses CMake as the build system.
- Fully self-contained regarding dependencies.
- Cross-platform compatibility (Windows and Linux).
- Adopts a well-defined version control system workflow (preferably with Git).
- Optionally, implements CI/CD workflows and uses C++ linters or formatters.

### Documentation Requirements
- Written in English.
- Includes a comprehensive README file.
- Developer documentation with architectural diagrams, main systems overviews, tutorials, and contribution guidelines.
- Documentation available and accessible online.

### Protocol Documentation
- Designs a binary protocol for client/server communications using UDP.
- Documents the protocol comprehensively.

## Part 1: Software Architecture & First Game Prototype

### Server
- Implements game logic and acts as the authoritative source.
- Multithreaded server using Asio library or OS-specific network layer.

### Client
- Handles graphical display and player input.
- Uses SFML or other approved libraries for rendering, audio, input, and network.

### Protocol
- Designs a binary protocol for client/server communications using UDP.
- Documents the protocol comprehensively.

### Game Engine
- Develops a prototype game engine with a focus on decoupling.
- Considers Entity-Component-System architectural pattern and Mediator design pattern.

### Gameplay
- Implements a playable game with a scrolling star-field background.
- Incorporates Bydos enemies, missiles, player movement, and basic sound design.

## Part 2: Advanced Topics: Expand to New Horizons

### Track #1: Advanced Architecture - Building a Real Game Engine
- Explores building a specialized game engine.
- Investigates advanced architectural patterns and design principles.

### Track #2: Create 3D FPS with our own game engine
- Like that we can show you that our game engine is not juste a game engine dedicated to a simple R-type game but she can be used to create complexe and not only 2D game

## How to use our program

### Prerequisites
- Our program can be used either on Windows or on Linux, thanks to our savior : The Man who did the raylib conan package so it can works on windows and linux

**Windows**
- To use it on windows you need to install Conan 2.0 and a version of MSVC after 2017
- Then launch 
```sh
./windows_compil.bat
```

**Linux**
- To use it on linux you need to have Conan 2.0 installed
- Then launch 
```sh
./linux_compil.bat
```

**Results !**
- When compiled on Linux you will have a binary that can be used like : ./server | ./game [nbServerGame] | ./client
- When compiled on Windows you will have a .exe that can be used by clicking on the exe apart from the game server where you need to do ./game.exe [nbServerGame]

## Depedencies

**Our program is using different library like :**
- Asio : We are using asio to do all the network whatever it is TCP or UDP
- Raylib : We are using raylib to do all the graphical display
- MySQL : We are using mysql to do all the save and login handling

## General Advice

This README serves as a guide for the project. Follow the outlined structure and continuously refer to it during development. Pay special attention to software engineering practices and documentation, as they are crucial aspects of the project.

## [More Documentation](https://www.notion.so/06d9706e356c4ff3b8fd61b4a2635837?v=a737ddbf108f430c887830e09b4e0084)

## 🙇 Author
#### Tom Dumort
- Github: [@totoleboss](https://github.com/tomjedusor934)

#### Arthur Prévot
- Github: [@robi](https://github.com/robiarth)

#### Antoine Zaky
- Github: [@zaky](https://github.com/AntoineZK)

#### Thomas Herveux
- Github: [@toto](https://github.com/ThomasHerveux)

#### Louis Lejaille
- Github: [@loubit](https://github.com/LLEJAILLE)
