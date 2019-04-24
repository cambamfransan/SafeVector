set(lib_name SafeQueueLib)

set(${lib_name}_srcs
  SafeQueue.hpp
  )

source_group("" FILES ${${lib_name}_srcs})

add_library(${lib_name} ${${lib_name}_srcs})
set_target_properties(${lib_name} PROPERTIES LINKER_LANGUAGE CXX)
install(TARGETS ${lib_name} DESTINATION bin)
target_include_directories(${lib_name} PUBLIC
  ${CMAKE_SOURCE_DIR}/${lib_name})
