cmake_minimum_required(VERSION 2.8)

option(test "Build all tests." ON)

set(PROJECT_NAME stl_workshop)
project(${PROJECT_NAME})

set(CMAKE_CXX_FLAGS "-g -Wall -Werror -Wno-missing-braces")
set(CMAKE_CXX_STANDARD 14)

# force static runtime libraries for msvc builds
if(MSVC)
  set(variables 
    CMAKE_CXX_FLAGS_DEBUG
    CMAKE_CXX_FLAGS_RELEASE
	CMAKE_CXX_FLAGS_RELWITHDEBINFO
	CMAKE_CXX_FLAGS_MINSIZEREL
  )
  foreach(variable ${variables})
	if(${variable} MATCHES "/MD")
	  string(REGEX REPLACE "/MD" "/MT" ${variable} "${${variable}}")
	endif()
  endforeach()
endif()

if (test)
  if (APPLE)
    add_definitions(-DGTEST_USE_OWN_TR1_TUPLE)
    add_definitions(-D__GLIBCXX__)
  endif (APPLE)

  add_subdirectory(lib/gtest-1.8.0)

  enable_testing()
  include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
  include_directories(workshop/)
  set(TEST_DIR tests/)

  add_executable(sumTests ${TEST_DIR}/test_01-sum.cpp)
  add_executable(minmaxTests ${TEST_DIR}/test_02-minmax.cpp)
  add_executable(findTests ${TEST_DIR}/test_03-find.cpp)
  add_executable(rotateTests ${TEST_DIR}/test_04-rotate.cpp)
  add_executable(partialTests ${TEST_DIR}/test_05-partial.cpp)
  add_executable(partial_sortTests ${TEST_DIR}/test_06-partial_sort.cpp)
  add_executable(partitionTests ${TEST_DIR}/test_07-partition.cpp)
  add_executable(remove_duplicatesTests ${TEST_DIR}/test_08-remove_duplicates.cpp)
  add_executable(find_diffTests ${TEST_DIR}/test_09-find_diff.cpp)
  add_executable(sumTwoContainersTests ${TEST_DIR}/test_10-sum_two_containers.cpp)
  add_executable(getJustOddTests ${TEST_DIR}/test_11-get_just_odd.cpp)

  target_link_libraries(sumTests gtest gtest_main)
  target_link_libraries(minmaxTests gtest gtest_main)
  target_link_libraries(findTests gtest gtest_main)
  target_link_libraries(rotateTests gtest gtest_main)
  target_link_libraries(partialTests gtest gtest_main)
  target_link_libraries(partial_sortTests gtest gtest_main)
  target_link_libraries(partitionTests gtest gtest_main)
  target_link_libraries(remove_duplicatesTests gtest gtest_main)
  target_link_libraries(find_diffTests gtest gtest_main)
  target_link_libraries(sumTwoContainersTests gtest gtest_main)
  target_link_libraries(getJustOddTests gtest gtest_main)

  add_test(NAME sum COMMAND sumTests)
  add_test(NAME minmax COMMAND minmaxTests)
  add_test(NAME find COMMAND findTests)
  add_test(NAME rotate COMMAND rotateTests)
  add_test(NAME partial COMMAND partialTests)
  add_test(NAME partial_sort COMMAND partial_sortTests)
  add_test(NAME partition COMMAND partitionTests)
  add_test(NAME remove_duplicates COMMAND remove_duplicatesTests)
  add_test(NAME find_diff COMMAND find_diffTests)
  add_test(NAME sum_two_containers COMMAND sumTwoContainersTests)
  add_test(NAME get_just_odd COMMAND getJustOddTests)
endif()
