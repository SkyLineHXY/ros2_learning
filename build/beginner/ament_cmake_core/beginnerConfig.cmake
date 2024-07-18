# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_beginner_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED beginner_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(beginner_FOUND FALSE)
  elseif(NOT beginner_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(beginner_FOUND FALSE)
  endif()
  return()
endif()
set(_beginner_CONFIG_INCLUDED TRUE)

# output package information
if(NOT beginner_FIND_QUIETLY)
  message(STATUS "Found beginner: 0.0.0 (${beginner_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'beginner' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${beginner_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(beginner_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${beginner_DIR}/${_extra}")
endforeach()
