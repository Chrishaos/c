cmake_minimum_required(VERSION 3.16...3.23)

# Set the project name and language
project(
  student_mgmt_system
  VERSION 0.0.1
  DESCRIPTION "student management system"
  HOMEPAGE_URL "%%myurl%%"
  LANGUAGES CXX C)

# Adding the src:
add_executable(student_mgmt_system StudentSystemManage.c)
