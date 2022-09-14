cmake_minimum_required(VERSION 3.22)
project(EE361Lab02 C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")

add_executable(punyC
        punyC.c)

add_executable(bitOps
        bitOps.c)

add_executable(mult
        mult.c)

add_executable(simpleAlgs
        simpleAlgs.c)

add_executable(simpSimCom
        simpSimCom.c)

add_executable(simpSimSeq
        simpSimSeq.c)

add_executable(bitcount
        bitcount.c)

add_executable(reverse_int
        reverse_int.c)

add_executable(modexp
        modexp.c)

add_executable(quiz03-1a
        quiz03-1a.c)