## Setup
### Day 0
Used this example for making the make file and project structure https://hiltmon.com/blog/2013/07/03/a-simple-c-plus-plus-project-structure/

Rules of the game have been established. Controller based game, 30 minutes of game time, and at least ten turns for a turn based game.

### Day 1 July, 1st
TODO: Need to set up git sub modules for the lib folder to get desired libraries and configure make to pull them incase that they are not there.

Make needs a way to compile with files in folder.
First texture was put into memory. To do this load an image from either a bitmap or .png file. Then load to texture.
I am thinking that I can load all textures to graphics memmory from the start.

#### Things I would like to work on before the tile renderer.
1. Scenes and Scene state machine.
2. Global texture loader and a sample map to load.
3. Global Input device.
4. Fix make with building from subfolders and make it work for mac. 
5. Refactor naming of the Game class to Application.
6. Tile rendering
7. External Libraries through git submodules. 
8. Set up git ignore for external Libraries. 
