# AD MAIOREM DEI GLORIAM!

# Compiler
CXX=g++

# Targets
DEBUG-TARGET=./brackeysPlatformDebug.out
DEPLOY-TARGET=./brackeysPlatform.out

# Source + Include
SOURCES=	../src/main.cpp ../src/block.cpp ../src/coin.cpp ../src/fruit.cpp \
			../src/game.cpp ../src/level.cpp ../src/player.cpp ../src/sign.cpp \
			../src/slime.cpp
INCLUDES=	-Iinclude

# Flags
DEBUG-FLAGS=-g

# Libraries 
SFML=-lsfml-graphics -lsfml-window -lsfml-system # Simple and Fast Multimedia Library

# Warning flags
WARNING-FLAGS=	-Wall -Wextra -Werror -Wpedantic -Wnull-dereference -Wlogical-op \
				-Wshadow -Wcast-qual -Wconversion -Wuseless-cast -Wformat=2 \
				-Wduplicated-cond -Wduplicated-branches -Wold-style-cast

# Deploy command: make
all:
	${CXX} ${WARNING-FLAGS} ${SOURCES} -o ${DEPLOY-TARGET} ${INCLUDES} ${SFML}

# Debug command: make debug
debug:
	${CXX} ${WARNING-FLAGS} ${DEBUG-FLAGS} ${SOURCES} -o ${DEBUG-TARGET} ${INCLUDES} ${SFML}

