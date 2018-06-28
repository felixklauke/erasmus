project(core)

include_directories(include)
include_directories(src)

file(GLOB SOURCES_HEADERS include/*.h)
set(HEADER_FILES ${SOURCES_HEADERS})

file(GLOB SOURCES_FILES src/*.cpp)
set(SOURCE_FILES ${SOURCES_FILES})

add_library(core ${HEADER_FILES} ${SOURCE_FILES})
