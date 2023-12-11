# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\IU1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\IU1_autogen.dir\\ParseCache.txt"
  "IU1_autogen"
  )
endif()
