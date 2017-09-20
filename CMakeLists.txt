cmake_minimum_required(VERSION 3.8)
project(love_letter)

set(CMAKE_CXX_STANDARD 14)

include_directories("${PROJECT_SOURCE_DIR}")

set(SOURCE_FILES main.cc model.h game.h player.h card.h card.cc player.cc game.cc)
add_executable(love_letter ${SOURCE_FILES})