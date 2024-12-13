#ifndef MY_PUBLISHER_HPP
#define MY_PUBLISHER_HPP
#include <ros/ros.h>
#include <demo_pkg/RobotStatus.h>
// 引入自定义消息头文件
class MyPublisher {
    public:
        MyPublisher(ros::NodeHandle& nh);
        ~MyPublisher();
        void publishMessage(const ros::TimerEvent& event);
    private:
        ros::NodeHandle nh_;
        ros::Publisher pub_;
        ros::Timer timer_;
        // 定时器
        demo_pkg::RobotStatus msg_;
        // 使用自定义消息类型
};
#endif // MY_PUBLISHER_HPP