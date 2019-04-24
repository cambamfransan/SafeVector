cmake_minimum_required(VERSION 3.12.3)
set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR} CACHE PATH
  "Location for installation"
  FORCE)
  project(safeVector)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory("SafeQueueLib/SafeQueueLib")
add_subdirectory("exe")
#add_subdirectory("test")
