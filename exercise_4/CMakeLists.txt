SET(SOURCE "~/lab2/embedded-linux/exercise_4/src/")
SET(INCLUDE "~/lab2/embedded-linux/exercise_4/inc/")

cmake_minimum_required (VERSION 3.22.1)
project(linux_project
    VERSION 1.01
    DESCRIPTION "Project to return random numbers in certain range"
    LANGUAGES C
    ) 
add_executable(myApp
    ${SOURCE}main.c
    ${SOURCE}randomNum.c
    ${INCLUDE}randomNum.h
    )
target_compile_features(myApp PRIVATE c_std_17)
target_compile_options(myApp PRIVATE -Wall -Wextra)

