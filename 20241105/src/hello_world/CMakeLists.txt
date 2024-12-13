cmake_minimum_required(VERSION 3.0.2)
project(hello_world)

# 添加对 roscpp 和 std_msgs 的依赖
find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  message_generation
)

# 添加 message
add_message_files(
  FILES
  person.msg
)

generate_messages(
  DEPENDENCIES std_msgs
)

catkin_package(
  CATKIN_DEPENDS std_msgs roscpp message_runtime
)

# 包含 ROS 头文件的路径
include_directories(
  ${catkin_INCLUDE_DIRS}
)


# 创建可执行文件
add_executable(talk src/talk.cpp)
add_executable(listen src/listen.cpp)
add_executable(msg src/msg.cpp)
add_executable(sub src/sub.cpp)

# 添加依赖
add_dependencies(msg ${PROJECT_NAME}_generate_messages_cpp)
add_dependencies(sub ${PROJECT_NAME}_generate_messages_cpp)

# 链接 ROS 库
target_link_libraries(talk
  ${catkin_LIBRARIES}
)
target_link_libraries(listen
  ${catkin_LIBRARIES}
)

target_link_libraries(msg
  ${catkin_LIBRARIES}
)

target_link_libraries(sub
  ${catkin_LIBRARIES}
)
