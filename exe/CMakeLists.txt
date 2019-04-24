set(exe_name DMV)

set(${exe_name}_srcs
  main.cpp
  )

source_group("" FILES ${${exe_name}_srcs})

add_executable(${exe_name} ${${exe_name}_srcs})
target_link_libraries(${exe_name} SafeQueueLib)
install(TARGETS ${exe_name} DESTINATION bin)
