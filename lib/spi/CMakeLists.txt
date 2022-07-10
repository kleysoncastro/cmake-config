add_library(spi
spi.hpp
spi.cpp
)

target_include_directories(spi PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)