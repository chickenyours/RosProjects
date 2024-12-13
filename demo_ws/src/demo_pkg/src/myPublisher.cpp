#include "MyPublisher.hpp"


MyPublisher::MyPublisher(ros::NodeHandle& nh)
{
    nh_ = nh;
    pub_ = nh_.advertise<demo_pkg::RobotStatus>("flag_1_WaNt_a_kir1frienD_D0_Y0U_Want_t0_be_My_gorlFrlend",10);
    timer_ = nh_.createTimer(ros::Duration(1.0),&MyPublisher::publishMessage,this);
    msg_.status = "CET4";
    msg_.x = 1.14514;
    msg_.y = 1.19810;
    msg_.linear_velocity = 5201314;
    msg_.angular_velocity = 8848;
}
void MyPublisher::publishMessage(const ros::TimerEvent& event) {
    pub_.publish(msg_);   
    ROS_INFO("Send a message!");
}

MyPublisher::~MyPublisher(){

}