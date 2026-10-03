cmake_minimum_required(VERSION 3.16)
project(OutkatkosV2 VERSION 2.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. Das Unterverzeichnis einbinden (das erledigt den kompletten Library-Build im Hintergrund)
add_subdirectory(external/CPP-SMTPClient-library)

# 2. Dein Testprogramm NUR aus deiner eigenen test.cpp bauen
add_executable(outkatkos_test test/test.cpp)

# 3. Dem Compiler sagen, wo die Header für dein Testskript liegen
target_include_directories(outkatkos_test PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/external/CPP-SMTPClient-library/src
)

target_link_libraries(outkatkos_test PRIVATE smtpclient)

