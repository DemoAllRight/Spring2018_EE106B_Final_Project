# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cc/ee106b/sp18/class/ee106b-aaf/ros_workspaces/lab1_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cc/ee106b/sp18/class/ee106b-aaf/ros_workspaces/lab1_ws/build

# Utility rule file for _run_tests_rgbd_launch_rostest_test_camera.test.

# Include the progress variables for this target.
include rgbd_launch/CMakeFiles/_run_tests_rgbd_launch_rostest_test_camera.test.dir/progress.make

rgbd_launch/CMakeFiles/_run_tests_rgbd_launch_rostest_test_camera.test:
	cd /home/cc/ee106b/sp18/class/ee106b-aaf/ros_workspaces/lab1_ws/build/rgbd_launch && ../catkin_generated/env_cached.sh /usr/bin/python /opt/ros/indigo/share/catkin/cmake/test/run_tests.py /home/cc/ee106b/sp18/class/ee106b-aaf/ros_workspaces/lab1_ws/build/test_results/rgbd_launch/rostest-test_camera.xml /opt/ros/indigo/share/rostest/cmake/../../../bin/rostest\ --pkgdir=/home/cc/ee106b/sp18/class/ee106b-aaf/ros_workspaces/lab1_ws/src/rgbd_launch\ --package=rgbd_launch\ --results-filename\ test_camera.xml\ --results-base-dir\ "/home/cc/ee106b/sp18/class/ee106b-aaf/ros_workspaces/lab1_ws/build/test_results"\ /home/cc/ee106b/sp18/class/ee106b-aaf/ros_workspaces/lab1_ws/src/rgbd_launch/test/camera.test\ 

_run_tests_rgbd_launch_rostest_test_camera.test: rgbd_launch/CMakeFiles/_run_tests_rgbd_launch_rostest_test_camera.test
_run_tests_rgbd_launch_rostest_test_camera.test: rgbd_launch/CMakeFiles/_run_tests_rgbd_launch_rostest_test_camera.test.dir/build.make
.PHONY : _run_tests_rgbd_launch_rostest_test_camera.test

# Rule to build all files generated by this target.
rgbd_launch/CMakeFiles/_run_tests_rgbd_launch_rostest_test_camera.test.dir/build: _run_tests_rgbd_launch_rostest_test_camera.test
.PHONY : rgbd_launch/CMakeFiles/_run_tests_rgbd_launch_rostest_test_camera.test.dir/build

rgbd_launch/CMakeFiles/_run_tests_rgbd_launch_rostest_test_camera.test.dir/clean:
	cd /home/cc/ee106b/sp18/class/ee106b-aaf/ros_workspaces/lab1_ws/build/rgbd_launch && $(CMAKE_COMMAND) -P CMakeFiles/_run_tests_rgbd_launch_rostest_test_camera.test.dir/cmake_clean.cmake
.PHONY : rgbd_launch/CMakeFiles/_run_tests_rgbd_launch_rostest_test_camera.test.dir/clean

rgbd_launch/CMakeFiles/_run_tests_rgbd_launch_rostest_test_camera.test.dir/depend:
	cd /home/cc/ee106b/sp18/class/ee106b-aaf/ros_workspaces/lab1_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cc/ee106b/sp18/class/ee106b-aaf/ros_workspaces/lab1_ws/src /home/cc/ee106b/sp18/class/ee106b-aaf/ros_workspaces/lab1_ws/src/rgbd_launch /home/cc/ee106b/sp18/class/ee106b-aaf/ros_workspaces/lab1_ws/build /home/cc/ee106b/sp18/class/ee106b-aaf/ros_workspaces/lab1_ws/build/rgbd_launch /home/cc/ee106b/sp18/class/ee106b-aaf/ros_workspaces/lab1_ws/build/rgbd_launch/CMakeFiles/_run_tests_rgbd_launch_rostest_test_camera.test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : rgbd_launch/CMakeFiles/_run_tests_rgbd_launch_rostest_test_camera.test.dir/depend

