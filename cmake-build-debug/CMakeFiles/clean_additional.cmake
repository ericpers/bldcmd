# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/bld-bin_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/bld-bin_autogen.dir/ParseCache.txt"
  "bld-bin_autogen"
  )
endif()
