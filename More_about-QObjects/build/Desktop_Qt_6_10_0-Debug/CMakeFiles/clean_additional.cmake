# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/More_about-QObjects_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/More_about-QObjects_autogen.dir/ParseCache.txt"
  "More_about-QObjects_autogen"
  )
endif()
