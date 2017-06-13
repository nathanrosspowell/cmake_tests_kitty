cmake_minimum_required(VERSION 3.7)

#set(cmake_c_compiler "clang-4.0")
#set(cmake_cxx_compiler "clang++-4.0")

project(kitty)
enable_testing()

add_subdirectory(colors)

add_library(kitty_lib
	#"include/kitty/shorthair.h"
	"include/kitty/bengal.h"
	#"include/kitty/bombay.h"
	#"src/shorthair.cpp"
	"src/bengal.cpp"
	#"src/bombay.cpp"
	)

target_include_directories(kitty_lib PUBLIC "include")
target_sources(kitty_lib PRIVATE "src")

add_executable(kitty_test "test/main.cpp")
target_link_libraries(kitty_test kitty_lib colors_lib)
add_test(kitty_test kitty_test)

