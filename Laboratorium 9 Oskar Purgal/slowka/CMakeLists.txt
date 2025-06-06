cmake_minimum_required(VERSION 3.10)
project(SlowkaApp)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  ftxui
  GIT_REPOSITORY https://github.com/ArthurSonzogni/FTXUI
  GIT_TAG v6.1.0
)
FetchContent_MakeAvailable(ftxui)

add_executable(slowka
  main.cpp
  src/file_validator.cpp
  src/learning_module.cpp
  src/statistics_module.cpp
)

target_include_directories(slowka PRIVATE include)
target_link_libraries(slowka PRIVATE ftxui::screen ftxui::dom ftxui::component)
