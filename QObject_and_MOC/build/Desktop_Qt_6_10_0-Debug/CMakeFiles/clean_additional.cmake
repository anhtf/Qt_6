# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QObject_and_MOC_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QObject_and_MOC_autogen.dir/ParseCache.txt"
  "QObject_and_MOC_autogen"
  )
endif()
